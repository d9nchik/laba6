#include <iostream>

using namespace std;

float sqrt(float, unsigned int, unsigned int n);

float pow(float, unsigned int);

int main() {
    const unsigned int n = 50;
    cout << "Введіть число a: ";
    float a;
    cin >> a;
    cout << "Введіть степінь k: ";
    unsigned int k;
    cin >> k;

    float result;
    result = (sqrt(a, 3, n) - sqrt(pow(a, 2) + 1, 6, n)) / (1 + sqrt(3 + a, 7, n));
    cout << "Відповідь: " << result;

    return 0;
}

float sqrt(float a, unsigned int k, unsigned int n) {
    if (a <= 0)
        return -1;
    float yn = a;
    for (unsigned int i = 1; i < n; ++i) {
        yn = (a / (pow(yn, k - 1)) + static_cast<float>(k - 1) * yn) / static_cast<float>(k);

    }
    return yn;
}

float pow(float a, unsigned int n) {
    for (unsigned int i = 1; i < n; ++i) {
        a *= a;
    }
    return a;
}

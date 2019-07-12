#include <iostream>

using namespace std;

int fi(int n) {
    int result = n;
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }

    if (n > 1) {
        result -= result / n;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << fi(n);

    return 0;
}
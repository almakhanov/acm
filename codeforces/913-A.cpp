#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    cout << (n >= 31 ? m : m % (1 << n));

    return 0;
}
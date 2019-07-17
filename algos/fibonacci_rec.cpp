#include <iostream>

// Time complexity 2^(O(n))

using namespace std;

int fib(int n){
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){

    int a;
    cin >> a;
    cout << fib(a);

    return 0;
}
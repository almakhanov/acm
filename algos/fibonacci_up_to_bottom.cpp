#include <iostream>

// Time complexity O(n)

using namespace std;

int tmp[100] = {0};

int fib(int n){
    if(n <= 1) return n;
    if(tmp[n] == 0) tmp[n] = fib(n-1) + fib(n-2);
    return tmp[n];
}

int main(){

    int a;
    cin >> a;
    cout << fib(a);

    return 0;
}
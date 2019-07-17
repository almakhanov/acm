#include <iostream>

// Time complexity O(n)

using namespace std;

int fib(int n){
    int a = 0, b = 1, c = 1;

    for(int i = 0; i < n - 1; i++){
        c = a + b;
        int tmp = c;
        a = b;
        b = tmp;
    }
    return c;
}

int main(){

    int a;
    cin >> a;
    cout << fib(a);

    return 0;
}
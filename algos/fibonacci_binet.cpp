#include <iostream>
#include <math.h>

// Time complexity O(1)

using namespace std;

double fib(int n){
    return (pow((1+sqrt(5))/2, n) / sqrt(5));
}


int main(){

    int n;
    cin >> n;
    cout << fib(n);

    return 0;
}
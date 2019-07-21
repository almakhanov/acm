#include <iostream>

using namespace std;

#define ll long long

ll F[(int)1e6 + 10];
ll s = 1e9;

void fib(int n){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= n; i++){
        F[i] = (F[i - 1] + F[i - 2]) % s;
    }
}


ll nod(ll a, ll b){
    if(b == 0) return a;
    return nod(b, a % b);
}


int main(){

    int a, b;
    cin >> a >> b;

    if(a < b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    fib(a+1);

    cout << F[nod(a, b)];


    return 0;
}


// nod(fib(a), fib(b)) = Fib(nod(a,b))
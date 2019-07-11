#include <iostream>

using namespace std;

int nod(int a, int b){
    if(b == 0) return a;
    return nod(b, a % b);
}

int nok(int a, int b){
    return a * b / nod(a, b);
}

int main(){

    int a, b;
    cin >> a >> b;
    if(a < b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    cout << nok(a, b);

    return 0;
}
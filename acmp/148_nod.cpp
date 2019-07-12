#include <iostream>

using namespace std;

int nod(int a, int b){
    if(b == 0) return a;
    return nod(b, a%b);
}


int main(){
    int a, b;
    cin >> a >> b;

    int tmp;
    if(a < b){
        tmp = b;
        b = a;
        a = tmp;
    }

    cout << nod(a, b);

    return 0;
}
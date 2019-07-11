#include <iostream>
#include <vector>


using namespace std;

int main(){
    int n = 1001000;
    vector<char> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            if(i * 1ll * i <= n){
                for(int j = i*i; j <= n; j+=i){
                    prime[j] = false;
                }
            }
        }
    }

    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(prime[i]) {
            cout << i << endl;
            cnt++;
        }
    }

    if(cnt == 0){
        cout << "Absent";
    }

    return 0;
}
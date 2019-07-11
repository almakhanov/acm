#include <iostream>
#include <vector>

using namespace std;

int n = 10001000;
vector<char> prime(n+1, true);

int getPrimeCnt(int a){
    int cnt = 0;
    for(int i = 2; i <= a; i++){
        if(prime[i]){
            if(a % i == 0) cnt++;
        }
    }
    return cnt;
}


int main(){
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

    int t;
    cin >> t;
    int a[t];
    for(int i =0; i<t; i++){
        cin >> a[i];
    }

    int maxi = 0;
    int b[t];

    for(int i = 0; i < t; i++){
        b[i] = getPrimeCnt(a[i]);
    }

    int maxx = -1;
    for(int i = 0; i < t; i++){
        if(b[i] > maxx) maxx = b[i];
    }

    int maxCnt = 0;
    vector<int> maxNums;
    for(int i = 0; i < t; i++){
        if(b[i] == maxx) {
            maxCnt++;
            maxNums.push_back(a[i]);
        }

    }

    int min = n+1;

    for(int i = 0; i < maxNums.size(); i++){
        if(maxNums[i] < min) min = maxNums[i];
    }

    cout << min;


    return 0;
}



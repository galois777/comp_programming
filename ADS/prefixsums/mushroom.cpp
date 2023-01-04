#include<iostream>
using namespace std;
const int MAXN = 10E5;
int arr[MAXN];
int pre[MAXN+1];

int slice(int a, int b){
    return pre[b] - pre[a];
}

int main(){

    int N;
    cin >> N;
    int k,m;
    cin >> k >> m;
    for (int i = 0; i < N; ++i){
            cin >> arr[i];
            if (i ==0){
                pre[i] = arr[i];
            }
            pre[i] = pre[i-1] + arr[i];
    }

    int max = 0;
    for (int p = 0; p < m/2; ++p){
            if (max <= slice(k+2*p-m,k+p)) max = slice(k+2*p-m,k+p);
    }

    cout << max;
}    



    

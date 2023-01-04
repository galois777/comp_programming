#include<iostream>
using namespace std;
const int MAXN = 2*10E5;

int main(){
    int t;
    cin >> t;
    while (t-- > 0){
        int m,n;
        cin >> n >> m;
        int P[MAXN] {};
        int a[MAXN] {};         
        
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if (i == 0){
                  P[i] = a[i];
            }
            else{
                P[i] = P[i-1] + a[i];
            }






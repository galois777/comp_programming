#include<iostream>
using namespace std;

int compint(int a,int b){
    int cnt; 
    for (int i = 1; i < 10; ++i){
        a*=3;
        b*=2;
        if (a > b){
            cnt = i;
            break;
        }
    }
    return cnt;
}

void solve(int n){
    cout << n;
}

int main(){
    int a,b;
    cin >> a >> b;
    solve(compint(a,b));
    return 0;
}

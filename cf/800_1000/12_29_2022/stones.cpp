#include<iostream>
#include<string>
using namespace std;

int solve(string s, int n){
    int cnt= 0;
    for (int i = 0; i < n-1; ++i){
        if (s[i] == s[i+1]) cnt ++;
    }
    return cnt;
}
    

int main(){
    string s;
    int n;
    cin >> n;
    cin >> s;
    cout << solve(s,n);
    return 0;
}


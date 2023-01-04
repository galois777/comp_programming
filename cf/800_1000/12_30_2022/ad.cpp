#include<iostream>
#include<string>
using namespace std;

void solve(int n, string s){
    //n is the size of s
    int cnt = 0;//count A
    for (int i = 0; i < n; ++i){
        if (s[i] == 'A') cnt ++;
    }
    if (cnt < n-cnt) cout << "Danik";
    else if (cnt == n-cnt) cout << "Friendship";
    else cout << "Anton";
}

int main(){

    int n;
    string s;
    cin >> n >> s;
    solve(n,s);
    return 0;
}    

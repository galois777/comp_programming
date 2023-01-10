#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>

using namespace std;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    // a: gold -> silver, b: silver -> gold)
    if (a <= b){
        cout << (n+a-1)/a << '\n';
    }
    else{
        cout << 1 << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}

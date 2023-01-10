#include<algorithm>
#include<vector>
#include<iostream>
#include<cstdio>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> vi(n);
    for (int i = 0; i < n; ++i){
        cin >> vi[i];
    }
    if (vi[0] == vi[n-1]){
        cout << "NO" << '\n';
        return;
    }
    else {
        cout << "YES" << '\n';
        reverse(vi.begin()+1,vi.end());
        for (int i = 0; i < n; ++i){
            cout << vi[i] << ' ';
        }
        cout << '\n';
        return;
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


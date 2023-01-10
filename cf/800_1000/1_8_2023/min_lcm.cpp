#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<array>
#include<string>


using namespace std;

#define ll long long 
#define ns ' '
#define nl '\n'

#define vi vector<int>
#define vd vector<double>

#define ar array<int>
#define ad array<double>

int gcd (int a, int b){
    if (b == 0) return a;
    if ( a < b ) swap(a,b);
    return gcd(a%b,b);
}

int lcm(int a, int b){
    return a*b/gcd(a,b);

}


void solve(){
    int n;
    cin >> n;
    int min = n+1, minT = 0;
    for (int i=1; i <= n/2; ++i){
       int j = n-i; 
       if (min > lcm (i,j)){
           min = lcm(i,j);
           minT = i;
       }
    }
    cout << minT << ns << n-minT << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();



    return 0;
}



/*
ID: galois71
PROG: ride 
LANG: C++                 
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<array>
#include<cstring>

#define MAXN 10

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    char comet[MAXN],group[MAXN];
    cin >> comet >> group;
    
    int prod = 1;
    int prod2 = 1;
    for (size_t i = 0; i < strlen(comet); ++i){
        prod *= (int)comet[i] - 64;
    }

    for (size_t i = 0; i < strlen(group); ++i){
        prod2 *= (int)group[i] - 64;
    }

    if (prod % 47 == prod2 % 47) cout << "GO";
    else cout << "STAY";
    cout << '\n';

    return 0;
}
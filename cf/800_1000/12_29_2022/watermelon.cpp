#include<iostream>
using namespace std;

bool isodd(int x){
    if (x % 2 == 1) return 1;
    return 0;
}

void solve(int x){
    if (x <= 2) cout << "NO";
    else{
        if(isodd(x)) cout << "NO";
        else cout << "YES";
    }
}

int readx(){
    int x; 
    cin >> x;
    return x;
}

int main(){
    solve(readx());
    return 0;
}


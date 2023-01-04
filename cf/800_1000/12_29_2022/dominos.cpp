#include<iostream>
using namespace std;

void solve(int m, int n){
    if (m % 2 == 1 && n % 2 == 1)
        cout << (m*n-1)/2;
    else
        cout << m*n/2;
}

int main(){


    int m,n;
    cin >> m >>  n;
    solve(m,n);

    return 0;
}

    

#include<iostream>
using namespace std;

int wsub(int n, int k){
    if (k == 0) return n;
    if (n % 10 == 0){
        return wsub(n/10,k-1);
    }
    else{
        return wsub(n-1,k-1);
    }
}
    
int main(){
    int n,k;
    cin >> n >> k;
    cout << wsub(n,k);


    return 0;
}

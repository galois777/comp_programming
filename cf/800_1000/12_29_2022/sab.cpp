#include<iostream>
using namespace std;

int borrow(int k, int w, int n){
    int val = 0;
    if (k*w*(w+1)/2 - n > 0){
        val = k*w*(w+1)/2 - n;
        return val;
    }
    else{
    return 0;
    }
}

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    cout << borrow(k,w,n); 
    return 0;
}

    

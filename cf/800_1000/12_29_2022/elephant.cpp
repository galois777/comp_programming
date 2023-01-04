#include<iostream>
using namespace std;

int steps(int x){
    int cnt = x/5;
    if (x % 5 == 0) return cnt;
    else return ++cnt;
}
    

int main(){
    int x;
    cin >> x;
    cout << steps(x);
    return 0;
}    


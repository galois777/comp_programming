#include<iostream>
using namespace std;




int main(){
    int n;
    cin >> n;
    int max = 0;
    int cnt = 0;

    for(int i = 0; i < n; ++i){
        int x,y;
        cin >> x >> y;
        cnt -= x;
        cnt += y;
        if (max < cnt) max = cnt;
    }
    cout << max;
    return 0;
}

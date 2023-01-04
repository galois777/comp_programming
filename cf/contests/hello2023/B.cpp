#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n;
        cin >> n;
        if (n == 2){
            cout << "YES" << endl;
            cout << 1 << ' ' << 1 << endl;
        }
        else if (n == 3){
            cout << "NO" << '\n';
        }
        else{
            if (n % 2 == 0){
                cout << "YES" << endl;
                for (int i =1; i <= n/2; ++i){
                    cout << 1 << ' ' << -1 << ' ';
                }
                cout << '\n';
            }
            else{
                int k = n/2;
                cout << "YES" << '\n';
                for (int i = 0; i < k; ++i){
                    cout << k-1 << ' ' << -k << ' ';
                 }
                cout << k-1 << '\n';
            } 
        }
    }
    return 0;
}


            


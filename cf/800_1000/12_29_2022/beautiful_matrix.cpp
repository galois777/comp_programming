#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int x_c,y_c;
    for (int i = 1; i <=5; ++i){
        for (int j = 1; j <= 5; ++j){
            int x;
            cin >> x;
            if (x == 1){
                x_c = j;
                y_c = i; 
            }
        }
    }
    cout << abs(x_c-3)+abs(y_c-3);
    return 0;
}

            

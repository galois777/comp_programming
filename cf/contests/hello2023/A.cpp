#include<iostream>
#include<stdio.h>

using namespace std;





int main(){

    int t;
    cin >> t;//the numer of tcs

    for (int i = 0; i < t; ++i){
        int n;
        string str;
        cin >> n >> str;
        int flag = -1;
        for (int i = 0;i<str.length() -1; ++i){
            if(str[i] != str[i+1]{
               if(str[i] == 'R'){
                flag = 0;
            }
            else {
                flag = i +1;
            }
            break;
            }
         }
        cout << flag << endl;
    }
    return 0;
}



#include<iostream>
#include<string>
using namespace std;



int main(){

    string s;
    cin >> s;
   
    
    for (int i = 1; i < s.size(); ++i){
        if (s[i] == '+'){
            s[i-1] = char(int(s[i-1])+1);
        }
    }
    for (int i =0; i< s.size(); ++i){
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout << "YES";
            return 0; 
        }
    }
    cout << "NO";
    return 0;
}     

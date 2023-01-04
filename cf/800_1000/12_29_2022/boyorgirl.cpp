#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int count(string s){
    int cnt = s.size();
    for (int i = 0; i<s.size();++i){
        for (int j = i+1; j <s.size();++j){
            if (s[j] == s[i]) cnt--;
        }
    }
    return cnt;
}    
    

int main(){

    string s;
    cin >> s;
    
    bool x = count(s) % 2;
    if (x == 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}

        
            
    

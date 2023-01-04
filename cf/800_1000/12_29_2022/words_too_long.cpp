#include<iostream>
#include<string>
using namespace std;

bool is_toolong(string s){
    int l = s.size();
    if (l > 10) return 1;
    else return 0;
}

void solve(string s){
    if (is_toolong(s)){
       cout << s[0] << s.size()-2 << s[s.size()-1]; 
        }
    else{
        cout << s;
    }
}

string inputs(){
    string s;
    cin >> s;
    return s;
} 

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i){
        solve(inputs());
        cout << endl;
    }
        
    return 0;
}

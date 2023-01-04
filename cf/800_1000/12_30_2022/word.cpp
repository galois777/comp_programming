#include<iostream>
#include<algorithm>
#include<cctype>
#include<string>
using namespace std;


string convert(string s){
    int cnt = 0;//count upper
    for (int i = 0; i < s.size(); ++i){
        if (isupper(s[i])) cnt++;
    }
    if (cnt <= s.size()-cnt){
       transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << convert(s);
    return 0;
}

    

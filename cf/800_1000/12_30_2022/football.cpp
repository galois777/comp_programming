#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isDangerous(string s, int sz){
    int cnt1 = 0;// count the num of 0s
    int cnt2 = 0;// count the num of 1s 
    bool x = 0;
    
    if (s[0] == '0'){
        cnt1++;
    }
    else cnt2++;
    for (int i = 1;i < sz; ++i){
        if(s[i] == '0'){
            cnt1++;
            cnt2 = 0;
        }
        else{
            cnt2++;
            cnt1 = 0;
        }
        if (cnt1 == 7 || cnt2 == 7){
            x = 1;
            break;
        }
    }
    return x;
}
        
void solve(bool x){
    if (x == 1) cout << "YES";
    else cout << "NO";  
}

int main(){
    string s;
    cin >> s;
    int sz=  s.size();
    solve(isDangerous(s,sz));   
    return 0;
}
    

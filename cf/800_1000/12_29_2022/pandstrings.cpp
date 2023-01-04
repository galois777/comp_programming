#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;

string getstring(){
    string s;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    return s;
}

int comp(string a, string b){
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < a.size();++i){
        cnt1 += int(a[i]);
    }
    for (int i = 0; i < b.size();++i){
        cnt2 += int(b[i]);
    }
    
    if(cnt1 < cnt2) return -1;
    else if (cnt1 == cnt2) return 0;
    else return 1;
}


int main(){
    cout <<    comp(getstring(),getstring());
    return 0;
}

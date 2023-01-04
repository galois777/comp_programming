#include<string>
#include<iostream>
using namespace std;

int getN(){
    int N;
    cin >> N;
    return N;
}

string getstring(){
    string s;
    getline(cin,s);
    return s;
}

bool is_lonely(string s1){
    int h_cnt = 0;
    
    for (int i = 0; i < s1.size(); ++i){
        if (s1[i] == 'H'){
            h_cnt++;
        }
    }
    if (h_cnt >= 2 && h_cnt <= s1.size()-2){
        return 0;
    }
    else{
        return 1;
    }
}

int layercount(string s, int N, int n){
    int cnt = 0;
    for (int i = 0; i < N; ++i){
        string s1 = s.substr((i,n));
        if (!is_lonely(s1)){
            cnt++;
        }
    }
    return cnt;
}

long long solve(string s, int N){
    long long cnt = 0;
    for (int i = 3; i<= N; ++i){
        cnt += layercount(s,N,i);
    }
    return cnt;
}


int main(){
    int N = getN();
    string s = getstring();
    cout << solve(s,N);


    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;

bool nln(int arr[], int sz){
    int cnt = 0;
    for (int i = 0; i < sz; ++i){
        if (arr[i] == 4 || arr[i] == 7) cnt++;
    }
    if (cnt == 4 || cnt == 7) return 1;
    else return 0;
}

int main(){
    string s;
    cin >> s;
    int sz = s.size(); 
    int arr[sz];
    for (int i = 0; i < sz;++i){
        arr[i] = int(s[i])-48;
    }
    if (nln(arr,sz)) cout << "YES";
    else cout << "NO";
    return 0;
}


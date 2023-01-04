#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void solve(string s){
    int arr[100];
    int j = 0;
    for (int i = 0; i< s.size(); ++i){
        if (s[i] != '+'){
           arr[j++] = int(s[i])-48;
        }
    }
    sort(arr,arr+j);
    for (int i = 0; i <j-1;++i){
        cout << arr[i] <<'+';
    }
    cout << arr[j-1];
}
     
                    

int main(){
    string s;
    cin >> s;
    solve(s);
return 0;
}

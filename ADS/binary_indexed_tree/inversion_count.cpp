#include<iostream>
using namespace std;

const int MAXN = 2*10E5+5;


int main(){
    int t;//the number of testcases
    for (int i =0; i < t; ++i){
        int n;//the numer of elements in each testcase
        cin >> n;
        int arr[MAXN];
        for (int j = 0; j < n; ++j){
            cin >> arr[j];
        }


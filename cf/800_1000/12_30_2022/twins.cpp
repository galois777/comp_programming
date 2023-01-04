#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;


int numcoins(int arr[], int n, int sum){
    int sum2 = 0;
    int cnt = 0;
    while (sum2 <= sum - sum2){
        sum2 += arr[cnt];
        cnt++;
    }
    return cnt;
}


int main(){

    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i =0; i< n; ++i){
        cin >> arr[i];
        sum += arr[i];
    }
             
    sort(arr,arr+n,greater<int>());
    cout << numcoins(arr,n,sum);
    return 0;
}



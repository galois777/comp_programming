#include<iostream>
#include<algorithm>

using namespace std;



int main(){
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    
    sort(arr,arr+N);
    
    long long ans = 0; 
    int minT;

    
    for (int i = 0; i < N; ++i){
        long long profit = arr[i] * (N-i);
        if (profit > ans){
            ans = profit;
            minT = arr[i];
        }
    }
    
    cout << ans << " " << minT << endl; 
    return 0;
}

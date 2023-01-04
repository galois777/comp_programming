#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int n,k;
    int cnt = 0;
    int cnt2 = 0;
    bool isPositive;
    cin >> n>> k;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
        if (arr[i] > 0) cnt2++;
    }
    if (cnt2 ==0){
        cout << 0;
    }
    else{ 
        sort(arr,arr+n);  
        for (int i = 0; i <n; ++i){
        
            if (arr[i] >= arr[k-1]) cnt++;
        }
        cout << cnt;
    }
    return 0;
}

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;   
    int arr[n];
    int max = 0;    
    int cnt = 1;
    cin >> arr[0];
    for (int i = 1; i< n; ++i){
        cin >> arr[i];
        if (arr[i] >= arr[i-1]) cnt++;
        else cnt = 1;
        if (cnt > max) max = cnt;   
    }
    if (cnt > max) max = cnt;
    cout << max;
    return 0;
}
        
    
    

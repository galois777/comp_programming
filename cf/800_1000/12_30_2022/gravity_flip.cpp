#include<iostream>
#include<algorithm>
using namespace std;




int main(){
    int n;
    cin >> n;
    bool arr[100][100];
    int max = 0;
    for (int i = 0; i < n; ++i){
        int x;  
        cin >> x;
        if (max < x) max = x;    
        for (int j = 0; j < x; ++j){
            arr[i][j] = 1;
        }
    }
    
    for (int j = max-1; j >=0; j--){
        for (int i = 0; i < n; ++i){
            if (arr[i][j]){
                for (int k = n-1; k > i; k--){
                    if(!arr[k][j]){
                        swap(arr[i][j],arr[k][j]); 
                    }
                }
            }
        }
    }
   
    for (int i = 0; i < n; ++i){
        int cnt = 0;
        for (int j = 0; j < max; ++j){
            if (arr[i][j]) cnt++;
        }
        cout << cnt << " ";
    }
    return 0;
}

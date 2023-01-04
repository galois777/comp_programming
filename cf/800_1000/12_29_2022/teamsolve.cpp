#include<iostream>
#include<tuple>
using namespace std;

int main(){
    int cnt1 = 0;
    int n;
    cin >> n;
    for(int i = 0; i< n;++i){
        int cnt2 = 0; 
        bool arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        for (int j = 0; j < 3; ++j){
            if(arr[j]) cnt2++;
        }
        if (cnt2 >= 2) cnt1++;
    }
    cout << cnt1;
    return 0;
}

 
         

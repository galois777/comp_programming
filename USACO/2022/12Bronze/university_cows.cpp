#include<iostream>
#include<tuple>
#include<algorithm>

using namespace std;

int getN(){
    int N;
    cin >> N;
    return N;
}

int* getsortedmoney(int N){
    int arr[N];
    for (int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    sort(arr,arr+N);
    return arr;
}

tuple<long long,int> profit(int arr[], int N){
    long long ans = 0; 
    int minT = 0;
    for (int i = 0; i < N; ++i){
        if (1ll * arr[i] * (N-i) > ans ){
            ans = 1ll * arr[i] * (N-i);
            minT = i;
        }
    }
    tuple <long long,int> X;
    X = make_tuple(ans,minT);
    return X;
}



int main(){
    int N = getN();
    int* arr = getsortedmoney(N);

    tuple<long long,int> Ans;
    Ans = profit(arr,N);

    cout << get<0> (Ans) << " " << get<1> (Ans);
    return 0;
}

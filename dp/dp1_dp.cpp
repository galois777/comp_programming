#include<iostream>
using namespace std;

int dp[10000];


int main(){
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	int n;
	cin >> n;
 	for (int i = 1; i<= n; ++i){
 		dp[i+2] = dp[i+1] + dp[i];
	}

	cout << dp[n];

}
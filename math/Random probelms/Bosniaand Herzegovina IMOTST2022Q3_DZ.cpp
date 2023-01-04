#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool is_square(long long a){
	long long x;
	for (long long i = 2; i <= sqrt(a)+1; ++i){
		x = i*i;
		if (a == x) return true;
		else if (a < x) return false;
		else continue;
	}
	return false;
}

int main(){
	long long s[30];
	s[1] = 2;
	s[2] = 7;

	for (int i = 3; i <= 29; ++i){
		s[i] = 4*s[i-1] - s[i-2];
	}

	for (int i = 1; i <= 29; i++){
		if (is_square(s[i])){
			cout << "n = " << i << " is a perfect square";
			cout << endl;
		}
		else cout << "n = " << i << " is not a perfect square";
		cout << endl;
	}


	return 0;
}
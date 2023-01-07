#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <unordered_set>
#include <vector>

using namespace std;

int main(){
    int value{7};
    int *ptr {&value};

    cout << ptr << '\n';
    cout << ptr+1 << '\n';
    cout << ptr+2 <<'\n';
    cout << ptr+3 << '\n';

    int arr[] {1,3,5,7,9};

    for (int i = 0; i < 4; ++i){
        cout << "Element " << i << " is at address "<< &arr[i] << '\n';
    }

    return 0;
}

    

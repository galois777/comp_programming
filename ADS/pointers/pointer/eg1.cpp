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
    int array[5]{9,7,5,3,1,};
    
    cout << "Element 0 has address" << &array[0] << '\n';

    cout << "The array decays to a pointer holding address: " << array << '\n';

    return 0;
}



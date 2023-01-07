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
#include<iterator>



using namespace std;

int* findValue(int* begin, int* end, int val){
    for (int* p{begin}; p!=end; ++p){
        if (*p == val){
            return p;
        }
    }
    return end;
}



int main(){

    int arr[]{ 2, 5, 4, 10, 8, 20, 16, 40 };

    // Search for the first element with value 20.
    int* found{ findValue(std::begin(arr), std::end(arr), 20) };

    // If an element with value 20 was found, print it.
    if (found != std::end(arr))
    {
        std::cout << *found << '\n';
    }

    auto found2 { find(begin(arr), end(arr), 20)};

    if (found2 != end(arr))
    {
        cout << *found << '\n';
    }

    return 0;
}

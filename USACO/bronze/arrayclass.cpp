#include<iostream>
#include<cstdef>//std::size_t
#include<array>//std::array, &c

using namespace std;

void printlength(const std::array<int,5>& myArray){
    cout<< "length" << myArray.size() << endl;
}

int main(){
    array<int,3> arr;//declare an array with length 3
    int array[3];// declared using traditional way

    array<int,10> myarr {2,34,4,5,5,5,2,1,};// list initialization
    array myarr2 {2,34,4,5,5,5,2,1,};// list initialization without length and size is allowed in C++17, but the following
                                     // array<int,> is not allowed 
    
    auto myarr3 {to_array<int>({9,7,5,3,1})}; //this is allowed since c++20

    myarr3[3]; //traditional
    myarr3.at(3);           //added bounds checking
    cout << myarr.size()<< endl;// adds size() function

    printlength(myarr);    
    
    for (size_t i{0}; i < myar.size(); ++i){
       cout << myarr[i] << ' ';
    }
    
    for (auto element: myarr){
       cout << myarr[i] << ' ';
    }

    sort(myarr.begin(),myarr.end());//sort the array forwards
    sort(myarr.rbegin(),myarr.rend());//sort the array backwards;                                //

    
    return 0;
}


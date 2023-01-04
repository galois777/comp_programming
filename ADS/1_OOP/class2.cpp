#include<iostream>
#include<string>
using namespace std;


template<class genType, int size = 50>
class genClass{
    genType storage[size];
};


template<class genType>
void myswap(genType& e11, genType e12){
    genType tmp = e11; e11 = e12; e12 = tmp;
}

int main(){
    genClass<int> intObject1;
    genClass<int, 100> intObject2;
    genClass<float, 123> floatObject;
    
    int m = 100;
    int n = 1220;
    cout << m << n << endl;
    cout << m << " " << n << endl; 
    myswap(m,n);
    cout << m << " " << n << endl;
}


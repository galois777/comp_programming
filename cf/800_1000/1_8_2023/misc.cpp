#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter the two numers you wish to operate with:" << '\n';
    cin >> a >> b;

    cout << "What kind of operation do you want to perform?" << '\n';
    cout << "A for addition, S for subtraction, M for multiplication, and D for division" << '\n';

    char c;
    cin >> c;
    switch (c){
        case 'A':
            cout << a+b << endl;
            break;
        case 'S':
              cout << a-b << endl;
              break;
        case 'M':
              cout << a*b << endl;
              break;
        case 'D':
              cout << ((double)a)/b << endl;
              break;
        }
    return 0;
}
            





     

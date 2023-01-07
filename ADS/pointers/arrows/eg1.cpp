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

/*An Arrow operator in C/C++ allows to access elements in Structures and Unions. It is used with a pointer variable pointing to a structure or union. The arrow operator is formed by using a minus sign, followed by the greater than symbol as shown below. 
 * Syntax : (pointer_name)->(variable_name)
 * Operation: The -> operator in C or C++ gives the value held by variable_name to structure or union variable pointer_name.
 * Difference between Dot(.) and Arrow(->) operator:

The Dot(.) operator is used to normally access members of a structure or union.
The Arrow(->) operator exists to access the members of the structure or the unions using pointers.

 */

struct student {
    char name[80];
    int age;
    float percentage;
};

//creawting the structure object;
struct student* emp = NULL;

int main(){

    emp = (struct student*) malloc(sizeof(struct student));

    emp -> age = 18;

    cout << ' ' << emp -> age;
    return 0;
}
















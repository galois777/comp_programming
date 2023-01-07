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

class Node{
    public:
        int data;
        Node* next;
};

int len(Node* head){
    int l = 0;
    while(head.next != NULL){
        head = head.next;
        l++;
    }
    return l;
}

int main(){
    Noe 


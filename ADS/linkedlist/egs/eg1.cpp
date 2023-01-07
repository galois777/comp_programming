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

class Node {
    public:
        int data;
        Node* next;
};

// a program for the traversal of a linked list

void printList(Node* n){
    while (n!= NULL){
        cout << n->data << ' ';
        n = n->next;
    }
}


int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    printList(head);
    return 0;
}






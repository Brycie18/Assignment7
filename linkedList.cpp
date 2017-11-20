/*
 * Bryce Tant
 * November 13th, 7pm
 * Function: Create and test a linked list data structure
 * Input: None
 * Output: Linked List
*/

#include "linkedList.h"
//#include "node.h"
#include <iostream>

using namespace std;

//Default Constructor. Contains only the head. Head set to 0
linkedList::linkedList() : size(1){
    head = new node(0);
}

//Alternate Constructor. Contains _size elements, all set to 0
linkedList::linkedList(int _size) : size(_size){
    head = new node(0);
    tail = head;
    for(int i=0; i < getSize(); i++){
        temp = new node(0);
        tail->setNextNode(temp);
        tail = temp;
    }
}

//Alternate Constructor 2. Contains _size elements, all set to value
linkedList::linkedList(int _size, double value): size(_size){
    head = new node(value);
    tail = head;
    for(int i=0; i < getSize(); i++){
        temp = new node(value);
        tail->setNextNode(temp);
        tail = temp;
    }
}

//Destructor
linkedList::~linkedList(){
    for(int i=0; i < getSize(); i++){
        temp = head;
        head = head->getNextNode();
        delete temp;
    }
}

//Init Function
void linkedList::init(){
    node head(0);
    tail = &head;
    while(tail->getNextNode() != NULL)
    for(int i=0; i < getSize(); i++){
        tail->setValue(0);
        tail = tail->getNextNode();
    }
}

//Insert Function
void linkedList::insert(double value, int index){  
    node head;
    tail = &head;
    while(tail->getNextNode() != NULL){
    for(int i=0; i < (index+1); i++){
        next = tail->getNextNode();
        tail = next;
    }
    }
    tail->setValue(value);
    cout << "Insertion complete." << endl;
}

//Find or Search Function
int linkedList::find(double value){
    int index = 0;
    node head;
    tail = &head;
    while(tail->getNextNode() != NULL){
    for(int i=0; i < getSize(); i++){
        if(tail->getValue() == value){
            cout << "Found the value" << endl;
            index = i;
        }else{
            cout << "Could not find that value in the dataset." << endl;
            index = 0;
        }
        next = tail->getNextNode();
        tail = next;
    }
    }
    return index;
}

//Operator Overload
double linkedList::operator[](int index){
    double value;
    node head;
    tail = &head;
    while(tail->getNextNode() != NULL){
    for(int i=0; i < (index+1); i++){
        next = tail->getNextNode();
        tail = next;
    }
    }
     value = tail->getValue();
     cout << "Found index." << endl;
     return value;
}

int linkedList::getSize() const{
    return size;
}

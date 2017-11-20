/*
 * Bryce Tant
 * November 13th, 7pm
 * Function: Create and test a linked list data structure
 * Input: None
 * Output: Linked List
*/

#include "node.h"
#include <iostream>

node::node() : value(0), nextNode(NULL) {
   
}

node::node(double _value) : value(_value), nextNode(NULL){
    
}

node::node(double _value, node *_nextNode) : value(_value), nextNode(_nextNode){
    
    
}

node::node(const node& orig) : value(orig.getValue()), nextNode(orig.getNextNode()){
 
}

node::~node(){
}

node* node::getNextNode() const {
        return nextNode;
    }

void node::setNextNode(node* _nextNode) {
        nextNode = _nextNode;
    }

double node::getValue() const {
        return value;
    }

void node::setValue(double _value){
    value = _value;
}
void node::printAll(){
    cout << "Node content:" << endl;
    cout << value << endl;
    cout << nextNode << endl;
}

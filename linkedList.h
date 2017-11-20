/*
 * Bryce Tant
 * November 13th, 7pm
 * Function: Create and test a linked list data structure
 * Input: None
 * Output: Linked List
*/

#include "node.h"

using namespace std;

class linkedList {

public:
    linkedList();
    linkedList(int _size);
    linkedList(int _size, double value);
    ~linkedList();
    
    void insert(double value, int index);
    int find(double value);
    double operator[](int index);

    int getSize() const;
    void init();

private:
    int size;
    node* head;
    node* next;
    node* tail;
    node* temp;
};

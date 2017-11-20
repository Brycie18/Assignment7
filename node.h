/*
 * Bryce Tant
 * November 13th, 7pm
 * Function: Create and test a linked list data structure
 * Input: None
 * Output: Linked List
*/

using namespace std;

class node {

public:

    node();
    node(double);
    node(double, node*);
    node(const node& orig);
    ~node();

    void printAll();
    
    node* getNextNode() const;

    void setNextNode(node*);

    double getValue() const;

    void setValue(double);

private:

    double value;
    node *nextNode;
};

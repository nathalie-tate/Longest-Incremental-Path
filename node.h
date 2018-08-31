#ifndef NODE_H
#define NODE_H

class node
{ 
  private:
    node* left;
    node* right;
    int value;
  public:
    node(); 
    node(int v); 
    node(node* l, node* r); 
    node(node* l, node* r, int v);

    node* getLeft();
    node* getRight();

    node* setLeft(node* l);
    node* setRight(node* r);

    int getValue();
    void setValue(int v);

    bool hasLeft();
    bool hasRight();
};

#endif

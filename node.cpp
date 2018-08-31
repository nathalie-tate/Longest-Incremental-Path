#include<cstdio>
#include"node.h"

node::node(): left(NULL), right(NULL), value(0) {} 
node::node(int v): left(NULL), right(NULL), value(v) {} 
node::node(node* l, node* r): left(l), right(r), value(0) {} 
node::node(node* l, node* r, int v): left(l), right(r), value(v) {}

node* node::getLeft()
{
  return left;
}
node* node::getRight()
{
  return right;
}

node* node::setLeft(node* l)
{
  *left = *l;
  return left;
} 
node* node::setRight(node* r)
{
  *right = *r;
  return right;
}

int node::getValue()
{
  return value;
}
void node::setValue(int v)
{
  value = v;
} 

bool node::hasLeft()
{
  if(left == NULL)
    return false;
  else
    return true;
}

bool node::hasRight()
{
  if(right == NULL)
    return false;
  else
    return true;
}

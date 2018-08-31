#include<cstdio>
#include "node.h"

void traverse(node*);
int longestIncrementalPath(node*, bool);

int main()
{

  node n_2(2);
  node n_5(5);
  node n_14(14);
  node n_10(10);
  node n_12(12);
  node n_11(11);
  node n_21(21);
  node n_18(18);

  node n_20(NULL, &n_21, 20);
  node n_19(NULL, &n_20, 19);

  node n_17(&n_18, &n_19, 17);
  node n_16(&n_17, NULL, 16);

  node n_15(&n_16, NULL, 15);

  node n_13(&n_15, NULL, 13);
  node n_9(&n_14, &n_10, 9);
  node n_8(&n_13, &n_9, 8);
  node n_7(&n_8, &n_12, 7);
  node n_6(&n_7, &n_11, 6);

  node n_4(&n_5, &n_6, 4);
  node n_3(NULL, &n_4, 3);
  node n_1(&n_2, &n_3, 1);

  printf("%d\n", longestIncrementalPath(&n_1, 0));

  return 0;
}

void traverse(node* n)
{
  printf("%d\n", n->getValue()); 

  if(n->hasLeft())
  {
    traverse(n->getLeft());
  }

  if(n->hasRight())
  {
    traverse(n->getRight());
  }
}

int longestIncrementalPath(node* n, bool prev_match)
{
  int m_l = 0, m_r = 0;

  if(n->hasLeft())
  {
    if(n->getLeft()->getValue() == n->getValue() + 1)
    {
      if(prev_match)
        m_l = 1 + longestIncrementalPath(n->getLeft(), 1);
      else
        m_l = longestIncrementalPath(n->getLeft(), 1);
    }
    else
      m_l = longestIncrementalPath(n->getLeft(), 0);
  }

  if(n->hasRight())
  {
    if(n->getRight()->getValue() == n->getValue() + 1)
    {
      if(prev_match)
        m_r = 1 + longestIncrementalPath(n->getRight(), 1);
      else
        m_r = longestIncrementalPath(n->getRight(), 1);
    }
    else
      m_r = longestIncrementalPath(n->getRight(), 0);
  }

  if(m_l || m_r)
  {
    return m_l > m_r ? m_l : m_r;
  }
  else if(prev_match)
  {
    return 2;
  }
  else
  {
    return 1;
  }
}

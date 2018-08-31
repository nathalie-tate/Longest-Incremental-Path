Given the root node of a binary tree, returns the length of the longest
continuous chain of nodes where the value of the next node in the sequence is
exactly 1 greater than the value of the current node (the
"longest incremental path").

Inspired by an interview question that I struggled with.

The tree included in `main.cpp` is depicted below.

``` 
            1
           / \
          2   3
               \
                4
               / \
              5   6
                 / \
                7  11
               / \
              8   12
            /   \
           13    9
          /    /   \
         15   14    10
         /
        16
       /
      17
      / \
    18   19
           \
            20
              \
               21
```

The length of the longest chain (`6 -> 7 -> 8 -> 9 -> 10`) is `5`.

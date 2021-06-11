# xor-linked-list
Doubly Linked List implementation using 1 pointer and XOR ops.

Compared to commom Doubly Linked List, the advantage of A XOR'ed Doubly Linked List is about memory usage, as we can have both "next" and "previous" pointers using only one pointer variable. By making use of this technique , a Linked List can save up to 8 bytes per node on a 64-bit architecture.  

This approach is possible because of XOR Bitwise operator(^).

How an ordinary doubly linked list node looks like:
```C
struct Node{
    struct Node *previous;
    struct Node *next;
    // data
};
```

How a XOR doubly linked list node looks like:
```C
struct Node{
    struct Node * xor_ptr;
    // data
};
```

# XOR Truth Table:
A | B | A ^ B
--|---|-------
1 | 0 |   1
1 | 1 |   0
0 | 0 |   0
0 | 1 |   1

Given 3 integers, X, A and B. If X is defined as: X = A ^ B, so X ^ B = A and X ^ A = B.

# Using XOR with Pointers
Example:
    Let's say we have a struct B, and B must store the addresses of both A and C.
    Then, the value to be store by B is the result of (struct A address)^(struct C address).
    
    0x0000000A -> Address of Structure A(0xA = 1010(binary))
    0x0000000C -> Address of Structure C(0xC = 1100(binary))
      1010 
     ^1100
     =0110(0x6)
    In this case, the value store by B is 0x6;

# Traversing the list
When traversing the list, we can start either from the head or the tail.
The "edges" don't need to hold a xor'ed address, as there is only one way to go from them.
For example, to traverse starting from the head, we have to store the head address(on a variable
called previous, so previous=list->head), and jump to the second element with something like 
current = list->head->xored_pointer;
Now that we're holding the previous address, from head, the only thing to do is to do a XOR on
current->xored_pointer^previous, and the result of this is the pointer to the NEXT element;





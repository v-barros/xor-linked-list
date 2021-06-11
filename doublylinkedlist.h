
/**
 *MIT License
 *
 *Copyright (c) 2021 v-barros
 *
 *Permission is hereby granted, free of charge, to any person obtaining a copy
 *of this software and associated documentation files (the "Software"), to deal
 *in the Software without restriction, including without limitation the rights
 *to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *copies of the Software, and to permit persons to whom the Software is
 *furnished to do so, subject to the following conditions:
 *
 *The above copyright notice and this permission notice shall be included in all
 *copies or substantial portions of the Software.
 *
 *THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *SOFTWARE.
 *
 *doublylinkedlist.h
 *
 *  Created on: 2021-06-11
 *      Author: @v-barros
 * 
 * 
 * */

#ifndef _DOUBLY_LINKED_LIST_
#define _DOUBLY_LINKED_LIST_
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>

struct Node{
    int data;
    struct Node * n_xor;
};
typedef struct Node Node;

struct List{
    struct Node * head;
    struct Node * tail;
    int size;
};

typedef struct List List;

List * newList();

/*  – Insert an element at the beginning of the list.*/
int insertFirst(List * list,int numToAdd);

/*  – Insert an element at the end of the list.*/
int insertLast(List * list ,int numToAdd);

/* – Remove the first occurrence of any element from a non-empty list.*/
int removeFirstOf(List * list,int numToDelete) ;

/* – Remove the last occurrence of any element from a non-empty list.*/
int removeLastOf(List * list,int numToDelete);

/* – Return the number of elements in the list. */
int size(List * list);

/* – Return true if the 1 is empty, otherwise return 0.*/
int isEmpty(List * list);

/* - Traverse the list and print the elements  */
void printListForwards(List * list);

/* - Traverse the list in backward manner and print the elements  */
void printListBackwards(List * list);

#endif /*_DOUBLY_LINKED_LIST_*/

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
 *doublylinkedlist.c
 *
 *  Created on: 2021-06-11
 *      Author: @v-barros
 * 
 * 
 * */

#include "doublylinkedlist.h"

Node * newNode(int data);

Node * xor(Node * a, Node * b);

Node * newNode(int data){
    Node * p = calloc(1,sizeof(List));
    assert(p);
    p->data=data;
    return p;
}

List * newList(){
    List * ll = calloc(1,sizeof(List));
    assert(ll);
    return ll;
}

Node * xor(Node * a, Node * b)
{
    uintptr_t ptr = (uintptr_t) a ^(uintptr_t) b;
    return (Node*) ptr;
}

int insertFirst(List * list,int data)
{
    Node * new_node = newNode(data);
    if(isEmpty(list))
    {
        list->tail=new_node;
    }
    else
    {
        list->head->n_xor = xor(list->head->n_xor,new_node);
        new_node->n_xor = list->head;
    }
    list->head=new_node;
    list->size++;
    return list->head->data;
}

int insertLast(List * list ,int data)
{
    return 1;
}

int removeFirstOf(List * list,int data)
{
    return 1;
}

int removeLastOf(List * list,int data)
{
    return 1;
}

int size(List * list)
{
    return list->size;
}

int isEmpty(List * list)
{
    return !list->size;
}
void printListForwards(List * list){
    printf("\n");
    if(isEmpty(list))
    {
        printf("List is empty!\n");
        return;
    }
    Node * current = list->head;
    Node * next = NULL;
    Node * previous = NULL;
    
    do{
        printf("%d ", current->data);
        next = xor(current->n_xor,previous);
        previous = current;
        current = next;
    }while(current);
    printf("\n");
}

void printListBackwards(List * list){}

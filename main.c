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
 *main.c
 *
 *  Created on: 2021-06-11
 *      Author: @v-barros
 * 
 * 
 * */

#include "doublylinkedlist.h"

int main(void){
    List * list = newList();
    int i=0,n;
    int op;
    do {
		printf("\n\nTesting List\n");
	    printf("<1> Insert in First position\n\n");
	    printf("<2> Remove first occurrence\n\n");
	    printf("<3> Print List in forward manner\n\n");
	    printf("<4> Insert in last position\n\n");
	    printf("<5> Remove last occurrence\n\n");
	    printf("<6> Print List in backward manner\n\n");
	    printf("<0> Exit\n");
	    printf("Option => ");
	    scanf("%d", &op);
	    printf("\n");
	    while(getchar()!='\n');
	    switch (op) {
	    	case 1:
	    		printf("=>%d\n",insertFirst(list, i));
	        	break;
	        case 2:
	        	printf("\nnumToRemove => ");
	        	scanf("%d", &n);
	        	printf("\n");
	        	while(getchar()!='\n');
	        	removeFirstOf(list, n);
	        	break;
	        case 3:
	        	printListForwards(list);
	        	break;
	        case 4:
	        	printf("=>%d\n",insertLast(list, i));
	        	break;
	        case 5:
	        	printf("\nnumToRemove => ");
	        	scanf("%d", &n);
	        	printf("\n");
	        	//while(getchar()!='\n');
	        	//removeLastOf(linkedList, n);
	        	break;
	        case 6:
	        	printListBackwards(list);
	        	break;
	        case 0:
	        	break;
	        default:
	        	printf("\nError: invalid input!\n");
	        }
	        i++;
	    }while (op != 0);

    return 0;
}
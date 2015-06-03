#include <stdio.h>
#include <malloc.h>  
#include <stdlib.h> 

#include "include/my_stack.h"
#define MAXSIZE 10

typedef struct Node  
{  
    int data;  
    struct Node * pNext;  
}NODE,* PNODE;  
  
typedef struct Stack  
{  
    PNODE pTop;  
    PNODE pBottom;  
}STACK,* PSTACK; 

int main(void) {
        STACK s;
	int x;	
        while ( !full(&s) ) {
		scanf("%d", &x);
		push(&s,x);
	}
	
	while ( !empty(&s) ) {
		pop(&s,&x);

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}

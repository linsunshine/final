#include <stdio.h>
#include <malloc.h>  
#include <stdlib.h>  

#define MAXSIZE 10
#include "include/my_stack.h"

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

  
int empty(PSTACK ps)  
{  
    if(ps->pTop == ps->pBottom)  
        return 1;  
    else  
        return 0;  
} 

int full(PSTACK ps)  
{  
    if(stack_size(ps) == MAXSIZE -1)
        return 1;
    else  
        return 0;  
}  
   
  
void push(PSTACK ps,int val)  
{  
    if(full(ps))  
    {  
        return ;
    }  
    else  
    {  
    PNODE pNew = (PNODE)malloc(sizeof(NODE));  
    pNew->data = val;  
    pNew->pNext = ps->pTop;  
    ps->pTop = pNew; 
    } 
}  

void pop(PSTACK ps, int *pval)  
{  
    if(empty(ps))  
    {  
        return ;
    }  
    else  
    {  
        PNODE r = ps->pTop;  
        *pval = r->data;  
        ps->pTop = r->pNext;  
        free(r);  
        r = NULL;  
        return;  
    }  
}  

int stack_capacity()
{
    return MAXSIZE;
}

int stack_size(PSTACK ps)
{ 
        return ps->pTop+1;
}


#include<stdio.h>
#include<stdlib.h>
#define SUCCESS 1
#define FAILURE 0

typedef int data_t;

typedef struct nodetag {
        data_t data;
        struct nodetag *next;
}node_t;

node_t *nodeNew(data_t dt, node_t *nxt)
{
	node_t * ndPtr;

	ndPtr = malloc(sizeof (node_t));
	if (ndPtr == NULL) {
            return NULL;
	} else {
	    ndPtr -> data =dt;								    ndPtr -> next = nxt;
	    return ndPtr;
			
	}	
}


										int add(node_t **ndPtrPtr, data_t dt)
{											node_t * ndPtr;

        ndPtr = nodeNew(dt, NULL);
	if (ndPtr == NULL) return FAILURE;
	while (*ndPtrPtr != NULL) {
		ndPtrPtr = &((*ndPtrPtr)->next);					}									        *ndPtrPtr = ndPtr;
	return SUCCESS;
}

										int del(node_t **ndPtrPtr, int n)							{
	node_t * ndPtr;
	while (n > 0 && *ndPtrPtr != NULL) {
	    ndPtrPtr = &((*ndPtrPtr)->next);
	    n--;
	}
	if (*ndPtrPtr != NULL){
	    ndPtr = (*ndPtrPtr)->next;
	    free(*ndPtrPtr);
	    *ndPtrPtr = ndPtr;
	    return SUCCESS;
	} else{ 								           return FAILURE;
        }
}

int insert(node_t **ndPtrPtr, int n, data_t dt)
{
	int i;
	node_t * ndPtr;

	if (n < 0) return FAILURE;
	for (i = 0; i < n && *ndPtrPtr != NULL; i++){
	     ndPtrPtr = &((*ndPtrPtr)->next);
	}
	if (i < n) return FAILURE;
	ndPtr = nodeNew(dt, *ndPtrPtr);
	if (ndPtr == NULL) return FAILURE;
	*ndPtrPtr = ndPtr;
	return SUCCESS;
}

void show(node_t *ndPtr)
{
        printf("{");
	while (ndPtr != NULL){
	        printf("%d", ndPtr->data);
		ndPtr = ndPtr -> next;
			    }
										        printf("}\n");
}

main()
{
											node_t *list = NULL;

	show(list);
	add(&list, 1);
	show(list);
	insert(&list, 1,4);
	show(list);
	insert(&list, 0,5);
	show(list);
	del(&list, 1);
	show(list);
	add(&list,3);
	show(list);
	add(&list,7);
	show(list);
	add(&list,8);
	show(list);
	insert(&list, 3,7);
}
					




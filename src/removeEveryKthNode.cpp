/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<stdlib.h>
struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node* temp = head;
	if (head == NULL || K<1) return NULL;
	if (K == 1){
		free(head);
		return NULL;
	}
	int length = 0;
	while (temp != NULL){
		length++;
		temp = temp->next;
	}
	if (K > length) return head;
	int count = 0;
	temp = head;
	//node* prev = head;
	while (1){
		++count;
		if (count == K - 1){
			//printf("1");
			node* temp1 = temp->next;
			temp->next = temp1->next;
			count = 0;
			free(temp1);
		}
		temp = temp->next;
		if (K % 2 == 0){
			if (temp == NULL) break;
		}
		else
		{
			if (temp->next == NULL) break;
		}
		// prev=prev->next;
	}
	return head;
}
/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};
void insert(int n);
struct node* head;
struct node * numberToLinkedList(int N) {
	int t;
	head = NULL;
	if (N > 0){
		
		while (N != 0){
			t = N % 10;
		    insert(t);
			N = N / 10;
		}
		return head;
	}
	else if (N < 0){
		N = N * (-1);
		//head = NULL;
		while (N != 0){
			t = N % 10;
			insert(t);
			N = N / 10;
		}
		return head;
	}
	else if (N == 0){
		insert(0);
		return head;
	}
}
void insert(int n){
	node* temp = (node*)malloc(sizeof(node));
	temp->num = n;
	temp->next = head;
	head = temp;
}

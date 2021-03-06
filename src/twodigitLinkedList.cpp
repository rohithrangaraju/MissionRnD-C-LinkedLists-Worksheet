/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};
void insert(int n);
int convert_sll_2digit_to_int(struct node *head){
	node* temp = head;
	int number = 0;
	int count = 0;
	while (temp != NULL){
		 if (temp->digit1 == 0 && temp->digit2 == 0 && count > 0) temp = temp->next;
		number =number*10+temp->digit1;
		number = number*10 + temp->digit2;
		temp = temp->next;
		count++;
	}
	return number;
}
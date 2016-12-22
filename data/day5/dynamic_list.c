#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void printList( struct node* head){
	while( head	!= NULL){
		printf( "\t%d",	head->data);
		head	= head->next;
	}
	printf( "\n");
}
int main( void){
	struct node* head,* p,* newNode;
	int i, arr[ 4]={	50,	30,	40,	60};
	for( i=0; i<4; i++){
		newNode	= ( struct node* ) malloc( sizeof( struct node));
		newNode->data	= arr[i];
		newNode->next	= NULL;

		if( i==0){
			head	= newNode;
			p	= newNode;
		}else{
			p->next	= newNode;
			p	= p->next;
		}

	}
	printList( head);
}

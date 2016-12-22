#include<stdio.h>
struct node{
	char data;
	struct node* next;
};
int countList(struct node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head=next;
	}
}
int mian(void){
	struct node n1={'A',NULL},n2={'B',NULL},
		    n3={'C',NULL},n4={'D',NULL},
		    * head;
	head=&n1;
	n1.next=&n2
}


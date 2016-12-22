#include<stdio.h>
typedef struct _NODE{
	struct _NODE*	left;
	struct _NODE*	right;
	int 		data;
}node;
//		left	right	data
//		----    -----   ----		
node D = {	NULL,	NULL,	4};
node E = {	NULL,	NULL,	5};
node F = {	NULL,	NULL,	6};
node B = {	&D,	&E,	2};
node C = {	&F,	NULL,	3};
node A = {	&B,	&C,	1};
//
int showTraceInfix(node*	head){
	static int	step = 0;
	if(head==NULL) return;
	else{
		printf("\t%d\t%d\t%d\n",head->left,++step,head->right);
		infix(head->left);

		printf("\t%d\t%d\t%d",head->left,++step,head->right);
		printf("\tData:%3d\n",head->data);

		printf("\t%d\t%d\t%d\n",head->left,++step,head->right);
		infix(head->right);

		printf("\n");
	}
}
int main(void){
	printf("\tL\tD\tR\tData\n");
	showTraceInfix(&A);
}

#include<stdio.h>
//----------------------------
#define MAX(a,b) (a>b)?a:b
//----------------------------
typedef struct _NODE{
	struct _NODE	* left;
	int 	data;
	struct _NODE	* right;
}node;
//----------------------------
node D	= {NULL,'D',NULL};
node E	= {NULL,'E',NULL};
node F	= {NULL,'F',NULL};
node B	= {&D,'B',&E};
node C	= {&F,'C',NULL};
node A	= {&B,'A',&C};
//
node D1	= {NULL,'D',NULL};
node E1	= {NULL,'E',&D1};
node F1	= {NULL,'X',NULL};
node B1	= {NULL,'B',&E1};
node C1	= {&F1,'C',NULL};
node A1	= {&B1,'A',&C1};
//----------------------------
int countNode (node* ptr);
int countLeafNode (node* ptr);
int countTreeHeight (node* ptr);
int equalTree (node* p,node* q);
//----------------------------
int main(void){
	node	* h	= &A;
	node	* h1	= &A1;
	printf("The number of tree is %d.\n",countNode(h));
	printf("The number of tree1 is %d.\n",countNode(h1));
	//
	h	= &A;
	h1	= &A1;
	printf("The leaf node number of tree is %d.\n",countLeafNode(h));
	printf("The leaf node number of tree1 is %d.\n",countLeafNode(h1));
	//
	h	= &A;
	h1	= &A1;
	printf("The height of tree is %d.\n",countTreeHeight(h));
	printf("The height of tree1 is %d.\n",countTreeHeight(h1));
	//
	int ans;
	h	= &A;
	h1	= &A1;
	printf("%s",(equalTree(h,h1)==0)?"The trees are different\n":"The trees are the same\n");
}
//----------------------------
int countNode(node* ptr){
	if(ptr==NULL) return(0);
	else return(countNode(ptr->left)+countNode(ptr->right)+1);
}
int countLeafNode(node* ptr){
	if(ptr==NULL) return(0);
	else if(ptr->left==NULL&&ptr->right==NULL) return(1);
	else return(countLeafNode(ptr->left)+countLeafNode(ptr->right));
}
int countTreeHeight(node* ptr){
	if(ptr==NULL) return(1);
	else return(MAX(countTreeHeight(ptr->left),countTreeHeight(ptr->right))+1);
}
int equalTree(node* p,node* q){
	if(p==NULL&&q==NULL) return(1);
	else if(p==NULL||q==NULL) return(0);
	else if(p->data!=q->data) return(0);
	else if(equalTree(p->left,q->left)==0) return(0);
	else return(equalTree(p->right,q->right));
}


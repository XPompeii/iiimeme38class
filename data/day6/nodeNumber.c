#include<stdio.h>
typedef struct _NODE{
	struct node	* left,* right;
	int 		data;
} node;
node D={NULL,4,NULL};
node E={NULL,5,NULL};
node F={NULL,6,NULL};
node B={&D,2,&E};
node C={&F,3,NULL};
node A={&B,1,&c};


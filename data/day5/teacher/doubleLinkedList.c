#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STRING_LENGTH 255

typedef struct _List{
	int 	no;
	char 	name[STRING_LENGTH];
	struct list* 	next;
}list;

int main(void){
	int 	no;
	char 	input[STRING_LENGTH];

	list* 	head	= NULL;
	list* 	current	= NULL;
	list* 	prev	= NULL;

	while(1){
		printf("No.\t= ");
		scanf("%d",&no);

		if(no==0) break;

		printf(
	}
}

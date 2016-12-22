#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ARRAY_LENGTH 200
#define BUCKET_NUMBER 10
#define RANGE 100
typedef struct _BUCKET{
	int data;
	struct _BUCKET* next;
}bucket;
void printList(bucket* h,int i){	//印出資料
	printf("Bucket %d :",i);
	while(h!=NULL){
		printf("%3d",h->data);
		h=h->next;
	}
	printf("\n");
}
int main(void){
	bucket* head[BUCKET_NUMBER]={NULL},* newNode,* p[BUCKET_NUMBER]={NULL};
	int i, arr[ARRAY_LENGTH], type;
	srand(time(NULL));		//rand(SEED)
	for(i=0;i<ARRAY_LENGTH;i++){
		arr[i]=rand()%RANGE;
		type=arr[i]%BUCKET_NUMBER;
		newNode=(bucket* )malloc(sizeof(bucket));
		newNode->data=arr[i];
		newNode->next=NULL;
		if(head[type]==NULL){	//用type分類
			head[type]=newNode;		
			p[type]=newNode;
		}else{
			p[type]->next=newNode;
			p[type]=p[type]->next;
		}
	}
	for(i=0;i<BUCKET_NUMBER;i++){
		printList(head[i],i);
	}
}


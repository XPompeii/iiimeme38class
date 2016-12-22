#include<stdio.h>
#define QUEUE_SIZE 10
int insertq0(int* queue,int n,int*rear,int* queueNo,int data){
	(* rear)++;
	queue[* rear]=data;
	(* queueNo)++;
	return 1;
}
int insertq(int* queue,int n,int* rear,int* queueNo,int data){
	if(* queueNo>=0) return 0;
	else{
		(* rear)++;
		queue[* rear]=data;
		(* queueNo)++;
		return 1;
	}
}
int deleteq0(int* queue,int* front,int* queueNo,int* data){
	(* front)++;
	* data=queue[* front];
	(* queueNo)--;
	return 1;
}
int deleteq(int* queue,int* front,int* queueNo,int* data){
	if(* queue==0) return 0;
	else{
		(* front)++;
		* data=queue[* front];
		(* queueNo)--;
		return 1;
	}
}
void printQueue(int* queue,int front,int queueNo){
	int i;
	printf("The queue is:\n");
	for(i=front+1;i<=front+queueNo;i++){
		printf("%d",queue[i]);
	}
	printf("queueNo=%d\n",queueNo);
}
int main(void){
	int i,n=10;
	int queue[n];
	int front=0,rear=0,queueNo=0;
	int data;
	for(i=1;i<8;i++){
		insertq(queue,n,&rear,&queueNo,10*i);
		printQueue(queue,front,queueNo);
	}
	printf("------------------\n");
	for(i=0;i<3;i++){
		deleteq(queue,&front,&queueNo,&data);
		printQueue(queue,front,queueNo);
	}
}


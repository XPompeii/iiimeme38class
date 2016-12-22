#include<stdio.h.>
int insertq0(int* queue,int n,int* rear,int* queueNo,int data){
	
}
#include<stdio.h>
int insertq0(int* queue,int n,int* rear,int data){
	* rear++;
	queue[* rear]=data;
	return 1;
}
int deleteq0(int* queue,int n,int* front,int* data){
	* front++;
	* data=queue[* front];
	return 1;
}
void printQueue(int* queue,int front,int queueNo){
	printf("%d\n",queue[queueNo]);
}
int insertq(int* queue,int n,int* rear,int* queueNo,int data){
	if(* queueNo>=sizeof(* queue)/2){
		return 0;
	}else{
		* rear++;queue[* rear]=data;
		(* queueNo)++;
		return 1;
	}
}
int deleteq(int* queue,int* front,int* queueNo,int* data){
	if(* queueNo<0){return 0;
	}else{
		* front++;* data=queue[* front];
		(* queueNo)--;
		return 1;
	}
}


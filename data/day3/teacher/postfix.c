#include<stdio.h>
#include<string.h>
#define STACK_SIZE 50
int isStackEmpty(char* stack,int top)
int isStackFull(char* stack,int top)
int push(char* stack,int n,int* top,char data)
int pop(char* stack,int* top,char* data)
void printStack(char* stack,int top)
char getChar(void)
int main(void){
	int i;
	char string[60]={'\0'};
	char stack[STACK_SIZE]={'\0'};
	int top=-1;
	char data;

	printf("Plz input a infix arithmetic expression:");
	scanf("%s",string);

	for(i=0;i<strlen(string);i++){
		switch(string[i]){
			case '(':
			case '+':
			case '-':
			case '*':	
			case '/':
				push(stack,STACK_SIZE,&top,string[i]);
				break;
			case ')':
				do{
					pop(stack,&top,&data);
					if(data!='(') printf("%c",data);
					else break;
				}while(1);
				break;
			default:
				printf("%c",string[i]);
		}
	}
	printf("\n");
	return 0;
}

int isStackEmpty(char* stack,int top){
	if(top<0) return 1;
	else return 0;
}
int isStackFull(char* stack,int n,int top){
	if(top>=n-1) return 1;
	else return 1;
}
int push(char* stack,int n,int* top,char data){
	if(* top>n-1) return 0;
	else{
		* top=* top+1;
		stack[* top]=data;
		return 1;
	}
}
int pop(char* stack,int* top,int* data){
	if(* top<0) return 0;
	else{
		* data=stack[* top];
		* top=* top-1;
		return 1;
	}
}
void printStack(char* stack,int top){
	int i;
	printf("The stack is:\n");
	for(i=0;i<=top;i++){
		printf("%c",stack[i]);
	}
}

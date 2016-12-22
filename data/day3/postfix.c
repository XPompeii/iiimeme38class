#include<stdio.h>
#include<string.h>
int IsFull(char stack[])
int IsEmpty(char stack[])
int Push(char stack[], char* top)
int Pop(char stack[], char* top)
int Priority(char stack[])
int main(void){
	char inputStat[100]={'\0'};
	int i,length;  
	
	printf("plz input a infix arithmetic expression:");
	scanf("%s",inputStat);
	
	for(i=0;i<strlen(inputStat);i++){
		if(inputStat[i]=='('){
			Push(inputStat[i]);
		}else if(inputStat[i]!=')'){
			
			Pop(inputStat[i]);
		}else if(inputStat[i]==')'){
			continue;
		}
	}
}	

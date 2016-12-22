#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(char *a){
	int i,sum=0;
	for(i=0;i<7;i++){
		if(*(a+i)>'9'||*(a+i)<'0') return -1;
		else sum+=((8-i)*(*(a+i)-'0'));
	}
	return sum;
}
int main(void){
	char input[7]={'\0'};
	do{
		printf("plz input a serial number(7 digits):");
		scanf("%s",input);
	}while(strlen(input)!=7);
	if(check(input)==-1) printf("ERROR!\n");
	else printf("%s%d\n",input,check(input)%10);
}

#include<stdio.h>
#include<string.h>
int sequentialRec(char list[], int length, char key, int i){
	i++;
	if(key==list[i]) return(i);
	else return sequentialRec(list,length,key,i);
}
int main(void){
	char a[100]={'\0'},c;
	int b,d;
	printf("plz input a string:");
	scanf("%s",a);
	printf("which character u wonna scan?");
	scanf(" %c",&c);
	b=strlen(a);
	do{
		d=sequentialRec(a,b,c,-1);
	}while(d==-1);
	printf("a[%d]=%c\n",d,a[d]);
	return 0;
}

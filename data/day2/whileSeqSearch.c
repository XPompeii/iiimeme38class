#include<stdio.h>
#include<string.h>
int whileSeqSearch(char list[], int length, char key){
	static int i=-1;
	while(i<length){
		i++;
		if(key==list[i]) return(i);
		else return(-1);
	}
}
int main(void){
	char a[100]={'\0'},c;
	int b,d;
	printf("plz input a string:");
	scanf("%s",a);
	printf("which charactor u wonna scan?");
	scanf(" %c",&c);
	b=strlen(a);
	do{
		d=whileSeqSearch(a,b,c);
	}while(d==-1);
	printf("a[%d]=%c\n",a[d]);
	return 0;
}

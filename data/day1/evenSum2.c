#include<stdio.h>
int main(void){
	int a,i,sum=0;
	printf("plz input a number:");
	scanf("%d",&a);
	if(a%2==1) a--;
	for(i=a;i>0;i-=2){
		sum+=i;
	}
	printf("%d\n",sum);
}

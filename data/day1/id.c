#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int parse_str(char str[9]){
	int sum=0,i;
	for(i=0;i<7;i++){
		sum+=((str[i]-'0')*(8-i));
	}
	printf("%d\n",sum);
	if(sum%10==(str[7]-'0')) return 1;
	else return 0;
}
int parse_int(int *arr){
	int sum=0,i;
	for(i=0;i<7;i++){
		sum+=(*(arr+i)*(8-i));
	}
	printf("%d\n",sum);
	if(sum%10==(*(arr+7))) return 1;
	else return 0;
}
int main(void){
	int j,i[8];
	char c[9];
	scanf("%s",c);
	for(j=0;j<8;j++){
		i[j]=c[j]-'0';
	}
	printf("%d,%d\n",parse_int(i),parse_str(c));
	return 0;
}

#include<stdio.h>
int main(){
	 char op;
	int a,b;
	printf("enter operator(+,-,*,/):");
	scanf("%c",&op);
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	switch (op){
		case1:printf("sum=%d",a+b);
		case2:printf("difference=%d",a-b);
		case3:printf("product=%d",a*b);
		case4:printf("divide=%d",a/b);
		default:printf("invalid operator");
	}
		return 0;
		
}

#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("1 add:,2 sub:,3 mul:,4 div:,5 mod:\n");
	printf("enter the choice");
	scanf("%d",&choice);
	printf("enter the values a and b");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
		case 1:
		printf("%d+%d=%d",a,b,a+b);
		break;
		case 2:
		printf("%d-%d=%d",a,b,a-b);
		break;
		case 3:
		printf("%d*%d=%d",a,b,a*b);
		break;
		case 4:
		printf("%d/%d=%d",a,b,a/b);
		break;
		case 5:
		printf("%d%%d=%d",a,b,a%b);
		break;
		default:
		printf("invaid");
	}
	
}

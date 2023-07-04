#include<stdio.h>

int main()

{
int num,i;

printf("enter the number to find factor");
scanf("%d",&num);

for(i=1;i<=num;i++)	
	{
		if(num%i==0)
		
		printf("%d\n",i);
		
	}
	
	
	
	return 0;
}

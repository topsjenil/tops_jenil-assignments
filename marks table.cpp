#include<stdio.h>

int main()

{
	int marks;

	printf("enter the marks");
	scanf("%d",&marks);
	
	if(marks>70)
	
	{
		printf("user will given A+");
	}
    else if(marks>60)
    {
    	printf("a grade");
    	
	}
	else if(marks>35)
	{
		printf("user will pass");
	}
	else
	{
		printf("user will fail");
	}
	

}

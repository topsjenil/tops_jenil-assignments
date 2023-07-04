#include<stdio.h>
	
	int main ()
	{
	  int a,b,c ;
	  
	  printf("enter the value of a ");
	  scanf("%d",&a);
	  printf("enter the value of b ");
	  scanf("%d",&b);
	  
	  printf("\n before swaping value of a and b is %d%d ",a,b);
	  
	  c = a;
	  a = b;
	  b = c;
	  
	  printf("\n after swaping value of a and b is %d%d",a,b);
	  	
	return 0;
	}

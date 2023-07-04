#include<stdio.h>
	
	int main ()
	{
	  int a =10;
	  int b = 20;
	  
	  printf("\n before swaping value of a and b is %d%d ",a,b);
	  
	  a = a + b;
	  b = a - b;
	  a = a - b;
	  
	  printf("\n after swaping value of a and b is %d%d",a,b);
	  	
	return 0;
	}

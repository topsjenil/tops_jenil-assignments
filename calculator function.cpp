#include<stdio.h>

void add();
void subs();
void mul();
void divid();

int main ()
{
	
	int a,b,c;
	add();
	subs();
	mul();
	divid();
	
}
void add()

{
	int a=10;
	int b=20;
	int c=a+b;
	
	printf("%d",c);
}
	
void subs()

{
	int a=10;
	int b=20;
	int c=a-b;
	
	printf("\n%d",c);
	}	
	
void mul()

{
	int a=20;
	int b=10;
	int c=a*b;
	
	printf("\n%d",c);
	
	
	
	}	
void divid()

{
	int a=50;
	int b=60;
	int c=a/b;
	
	printf("\n%d",c);

	
	}	
	
	


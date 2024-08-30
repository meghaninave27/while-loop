//wap to print leap year between using two numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	
	while(x<=y)
	{
		if(x%4==0)
		{
			printf("%d " ,x);
			
			
		}
	
		x=x+4;
		
	}
}

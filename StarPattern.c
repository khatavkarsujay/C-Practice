/* Star('*') pattern */

#include<stdio.h>

int main()
{ 
	int row;
	int i;
	int j;
	int k;
	int m;

	printf("Enter number of rows:");
	scanf("%d", &row);
	m=row;
	
	for(i=1; i<=row; i++)
	{
		
		for(k=2; k<=i; k++)
		{
			printf(" ");
		}
		for(j=2*m-1; j>=1; j--)
		{
			
			printf("*");
			
		}
		m--;
			printf("\n");
		
		
	}
	
	return 0;
}
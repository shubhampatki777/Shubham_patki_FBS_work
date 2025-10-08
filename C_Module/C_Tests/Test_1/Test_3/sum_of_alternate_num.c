#include <stdio.h>
void main() 
{
	int sum = 0;
	for (int i=1;i<=5;i=i+2)
	{
		sum = sum + i;
	}
	printf("%d Sum of Alternate number is ",sum);
}
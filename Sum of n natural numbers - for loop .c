#include <stdio.h>

int main()
{
	int num,count=1,sum = 0;
	printf("Enter n : ");
	scanf("%d", &num);
  
	for(count=1;count<=num;count++)
	{
		sum+=count;
	}
  
	printf("Total sum = %d", sum);
	return 0;
}

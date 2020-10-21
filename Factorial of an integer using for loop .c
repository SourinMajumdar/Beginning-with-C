#include <stdio.h>

int main()
{
	int n, i;
	unsigned long long fact = 1;
  
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	if (n<0){
		printf("Factorial does not exist.");
	}
  
	else{
		if (n==0 || n==1){
			printf("Factorial is 1.");
		}
	
		else{
			for (i=1;i<=n;i++)
				fact*=i;
			printf("Factorial of %d is %llu.",n,fact);
			}
	}
	return 0;
}

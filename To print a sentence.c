#include <stdio.h>
int main()
{
	char sentence[100];
	printf("Enter your sentence: ");
	scanf("%[^\n]%*c", &sentence);
	printf("Your sentence is: \n");
	printf(sentence);
	return 0;	
}

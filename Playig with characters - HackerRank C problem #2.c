#include <stdio.h>
int main() 
{
    char ch,s[50],sen[90];
    scanf("%c*c", &ch);
    scanf("%s*c", &s);
    scanf(" %[^\n]%*c", &sen);
    printf("%c\n", ch);
    printf("%s\n",s);
    printf(sen);
    return 0;
}

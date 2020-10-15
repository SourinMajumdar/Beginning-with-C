#include <stdio.h>
int main()
{
	int a,b,x,y;
    float c,d,p,q;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    x=a+b;
    y=a-b;
    printf("%d %d \n", x,y);
    p=c+d;
    q=c-d;
    printf("%.1f %.1f",p,q);
    
    return 0;
}

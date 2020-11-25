#include<stdio.h>
int main(){
    int x, y, z;
    printf("Enter three Integer numbers for x, y, z : ");
    scanf("%d %d %d", &x, &y, &z);
    
    if((x < y)&&(x < z))
    printf("%d is smallest",x);
    
    else
    {
        if(y < z)
        printf("%d is smallest",y);
        
        else
        printf("%d is smallest",z);
    }
    return(0);
}

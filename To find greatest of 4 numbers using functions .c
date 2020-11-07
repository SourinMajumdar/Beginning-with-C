#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max;
    max=a;
    if (max<b){
        max=b;
    }
    else if (max<c){
        max=c;
    }
    else if (max<d){
        max=d;
    }
    return max;

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

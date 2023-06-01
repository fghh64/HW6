#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int e=a+((c - a % d) % d);
    while (e<=b)
    {
        printf("%d ",e);
        e+=d;
    }
    printf("\n");
    return 0;
}
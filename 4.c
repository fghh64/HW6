#include <stdio.h>

int sum(int * num) {
    int s=0;
    while (*num!=0) {
        s+=*num%10;
        *num/=10;
    }
    return s;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", sum(&a));
}
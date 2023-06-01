#include <stdio.h>

int main() {
    int n;
    int a=0, b=1, c=2;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d\n", a);
    return 0;
}
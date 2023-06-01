#include <stdio.h>

int ispolnitel(int num) {
    int a=(num%10)*((num/10)%10);
    int b=(num/100)*((num/10)%10);
    if (a<b) {
        if (10>b) {
            return (b*10+a);
        } else  {
            return (b*100+a);
        }
    } else {
         if (10>a) {
            return (a*10+b);
        } else  {
            return (a*100+b);
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", ispolnitel(num));
}
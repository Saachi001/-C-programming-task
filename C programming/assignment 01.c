#include<stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;
    int h = a++;
    int i = a--;
    printf("the sum of a and b is %d\n", c);
    printf("the subtraction of a and b is %d\n", d);
    printf("the multiplication of a and b is %d\n", e);
    printf("the division of a and b is %d\n", f);
    printf("the modulo of a and b is %d\n", g);
    printf("the increment of a by one is %d\n", h);
    printf("the decrement of a by one is %d\n", i);
    return 0;
}

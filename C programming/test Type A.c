#include <stdio.h>
int main()
{
    int y = 2;
    float x = 1.5;
    int z = 3;
    int p;
    p =(x * y)/z;
    printf("p = %d\n", p);
    p = ++y - x + z++;
    printf("p = %d\n", p);
    p = (x * z)/ y++;
    printf("p = %d\n", p);

}

#include<stdio.h>
int main()
{
    int i = 100;
    for(i = 100; i > 0; i -= 2){
        printf("%d - %d\n", i, i / 2);
    }
}

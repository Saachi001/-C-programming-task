#include<stdio.h>
int main(){
int n, i, f = 1;
printf("Enter an integer number:");
scanf("%d", &i);
for (n = 1; n <= i; n++)
    f *= n;
printf("Factorial of %d = %d\n", i, f);
return 0;
}


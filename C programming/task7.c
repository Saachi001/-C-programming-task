#include<stdio.h>
int main(){
int a, b;
printf("Enter for a:");
scanf("%d", &a);
printf("Enter for b:");
scanf("%d", &b);
 a = (a + b) - ( b = a);
 printf(" a = %d and b = %d", a, b);
return 0;
}

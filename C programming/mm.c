#include<stdio.h>
int addition(int a, int b){
int c = a + b;
return c;
}
int subtraction(int a, int b){
int c =  a - b;
return c;
 }
 int division(int a, int b){
 int c = a / b;
 return c;
 }
 int product(int a, int b){
 int c = a * b;
 return c;
 }
 int modulus(int a, int b){
 int c = a % b;
 return c;
 }
 int main(){
 int a , b;
 printf("Enter the number of your choice:");
 scanf("%d %d", &a, &b);
 int x = addition(a, b);
 int z = subtraction(a, b);
 int y = division(a, b);
 int u = product(a, b);
 int w = modulus(a, b);
 printf("the sum is:%d\n", x);
 printf("the difference is:%d\n", z);
 printf("the division is:%d\n", y);
 printf("the product is:%d\n", u);
 printf("the remainder is:%d\n", w);
 return 0;
 }





// A program that a perform  Arithmetic Operation using Function
#include<stdio.h>
int additon(int a, int b){  //declaring a function
int c = a + b;
return c;
}

    int Subtraction(int a, int b){
    int d = a - b;
    return d;
    }
int multiplication(int a, int b){
int e = a * b;
return e;
}
int division(int a, int b){
int f = a / b;
return f;
}
int modulus(int a, int b){
int g = a % b;
return g;
}
int main(){
    int a, b;
    printf("Enter the two number of your choice:");
scanf("%d %d", &a, &b);
int x = additon(a, b); // calling a function
int z = Subtraction(a, b);
int y = multiplication(a, b);
int v = division(a, b);
int u = modulus(a, b);
printf("the sum is:%d\n", x);
printf("%the difference between them is:%d\n", z);
printf("the product is:%d\n", y);
printf("the division is:%d\n", v);
printf("the remainder is:%d\n", u);
return 0;
}


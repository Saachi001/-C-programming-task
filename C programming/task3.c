#include<stdio.h>
int main(){
float a, b;
const float HALF = 0.5;
printf("Enter the height:");
scanf("%f",&a);
printf("Enter the length:");
scanf("%f",&b);
double c =HALF * a * b;
printf("The Area of Triangle is:%f\n", c);
if(c > 100){
    printf("Area is greater then 100");
}
else {
    printf("Area is not greater than 100");
}





return 0;
}

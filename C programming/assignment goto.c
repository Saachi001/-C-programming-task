#include<stdio.h>
 main() {
int  data;
int password;
printf("set the required password\n");
scanf("%d", &data);

//enter your password
young:
printf("input your password\n");
scanf("%d", &password);
if(password==data)
{
    printf("well come login sucess\n");
}
    else
     {

        printf("invalid password enter PASSWORD AGAIN\n");
    goto young;
}
 return 0;
}

#include<stdio.h>
 int main()
{
    //int a = 12345;
    //int x;
   // printf("Enter your password\n");
   // scanf("%d", &x);

    //if(x==a){
        //printf("succesfully Logged in");

       // }
      // else if(x != a)
   // printf("WRONG PASSWORD TRY AGAIN\n");
  int password, x = 10;
  while(x!= 0);{
    printf("\ninput your password:");
    scanf("%d", &password);
    if(password == 12345)
    {
        printf("correct password");
        x = 0;
        }
        {
            printf("Wrong password try another");
            }
            printf("\n");

  }

    return 0;
}

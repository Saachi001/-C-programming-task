// A program that grade a student based on his various scores
#include<stdio.h>
main()
{
  int test;
  int attendance;
  int exam;
  int total;
  printf("Enter your Test score:");
  scanf("%d", &test);
  printf("Enter your Attendance:");
  scanf("%d", &attendance);
  printf("Enter your Exam score:");
  scanf("%d", &exam);
  total = test + attendance + exam;
   printf("Your Total Score is %d\n", total);
  if ( total <=0 || total >100){
    printf("WRONG ENTRY");
  }
    else if (total < 40){
        printf("Your Grade is F");
    }
     else if (total >=40 &&  total<45){
        printf("Your Grade is E");
     }
     else if (total >=45 && total<50){
        printf("Your Grade is D");
     }
     else if (total >=50 && total<60){
        printf("Your Grade is C");
     }
     else if (total >=60 && total< 75){
        printf("Your Grade is B");
     }
     else
     {
         printf(" Your Grade is A");
     }











}

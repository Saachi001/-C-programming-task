#include <stdio.h>    //defining a constant using #define preprocessor
#define LENGTH 5   // #define identifier value
#define WIDTH 7
#define NEWLINE '\n'
int main()
{
int area;
area = LENGTH * WIDTH;
printf("value of area : %d", area);
printf("%c", NEWLINE);
return 0;
}

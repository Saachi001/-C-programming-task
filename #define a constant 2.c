#include <stdio.h>  // Defining a constant using const prefix
int main()
{
const int LENGTH=2;  //const type variable = value;
const int WIDTH = 3;
const char NEWLINE = '\n';
int area;
area = LENGTH * WIDTH;
printf("value of area : %d", area);
printf("%c", NEWLINE);
return 0;
}

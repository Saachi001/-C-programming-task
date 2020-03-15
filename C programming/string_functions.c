#include <string.h>
#include <stdio.h>

int main(){
    char var1[30];
    char var2[30];
    char * var3;
    char showlength[] = "hello world";
    int length;

    //string copy
    printf("Enter the string to var1: ");
    gets(var1);
    strcpy(var2, var1);
    printf("var2: %s\n", var2);

    // concatenation
    var3 = strcat(var1, var2);
    printf("var3: %s\n", var3);

    // Length
    length = strlen(showlength);
    printf("length of var1 is %d", length);


    return 0;
}

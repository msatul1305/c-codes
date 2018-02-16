// C program to illustrate
// logical error
#include<stdio.h>
int main()
{
    int i = 0;
 
    // logical error : a semicolon after loop
    for(i = 0; i < 3; i++);
    {
        printf("loop ");
    } 
    getchar();
    return 0;
}

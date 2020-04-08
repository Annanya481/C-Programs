/* Get 2 values as input and print the equal to not equal to operator according
to the input. */

#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num1==num2)
      printf("equal");
    else
      printf("not equal");
    return 0;
}
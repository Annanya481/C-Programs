/* WAP to find the bitwise OR of two decimal numbers. 
An OR gate reads 2 input either 0 or 1 and outputs 0 if both the inputs are 0
else 1. Similarly WAP to read 2 decimal numbers and finds OR of two numbers.*/

#include<stdio.h>
int main()
{
    int a, b, bitwise;
    scanf("%d %d", &a, &b);
    printf("Bitwise OR of %d and %d is: %d", a, b, a|b);
    return 0;
}
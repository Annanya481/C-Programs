/* Lydia learns number conversion concept in C. Her teacher gave a hw
to convert the number from decimal to binary. Help her to convert the number
from decimal to binary. */

#include<stdio.h>
# define NUM_BITS 7
int *decimal_to_binary(int num)
{
    static int bin_num[100];
    int ct = NUM_BITS - 1;
    while(num>0)
    {
        bin_num[ct] = num%2;
        num/=2;
        ct--;
    }
    while(ct>=0)
    {
        bin_num[ct] = 0;
        ct--;
    }
    return bin_num;
}
int main()
{
    int decimal;
    scanf("%d", &decimal);
    int *p = decimaltobinary(decimal);
    int i;
    for(i=0; i<NUM_BITS; i++)
    {
        printf("%d", *(p+i));
    }
    return 0;
}
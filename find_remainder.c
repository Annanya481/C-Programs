/* WAP to find remainder when two given numbers are divided. */

#include<stdio.h>
int main()
{
    int T, i;
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", A%B);
    }
    return 0;
}
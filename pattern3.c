/* WAP to generate the following program:
@ @ @ @ @
@ @ @ @
@ @ @
@ @
@*/

#include<stdio.h>
int main()
{
    int rows, i, j;
    scanf("%d", &rows);
    for(i=rows; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf("@ ");
        }
        printf("\n");
    }
    return 0;
}
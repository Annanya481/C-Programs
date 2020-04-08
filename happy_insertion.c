/* A little boy Chintu received a gift from his nephew. He found numbers
written in a building blocks arranged in array. His friend Tom wishes to insert
an element in a specified position in the building block. Your task is to
WAP to insert an element in a specified position. */

#include<stdio.h>
int main()
{
    int limit, num, pos, i, A[10];
    scanf("%d", &limit);
    for(i=0; i<limit; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d %d", &num, &pos);
    for(i=limit; i>=pos; i--)
    {
        A[i] = A[i-1];
    }
    A[pos-1] = num;
    limit++;
    for(i=0; i<limit; i++)
    {
        printf("%d", A[i]);
    }
    return 0;
}
/* WAP to find the number of distinct elements in an unsorted array. */

#include<stdio.h>
int main()
{
    int len, A[50];
    scanf("%d", &len);
    int i, ele=len;
    for(i=0; i<len; i++)
    {
        scanf("%d", &A[i]);
    }
    int j=0;
    while(j<len)
    {
        for(i=j+1; i<len; i++)
        {
            if(A[j]==A[i])
              ele--;
        }
        j++;
    }
    printf("%d", ele);
    return 0;
}
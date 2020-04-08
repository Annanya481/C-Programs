/* You are given a string. Your task is to determine whether number of occurences
of some character in the string is equal to the sum of the numbers of occurrences
of other characters in the string.*/

#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, flag=0;
    char A[50];
    int B[26];
    scanf("%d", &t);
    while(t--)
    {
        for(i=0; i<26; i++)
        {
            B[i] = 0;
        }
        scanf("%s", A);
        int len = strlen(A);
        if(len%2==0)
        {
            for(i=0; i<len; i++)
            {
                B[(int)A[i]-97]++;
            }
            for(i=0; i<26; i++)
            {
                if(B[i]==len/2)
                {
                    printf("YES\n");
                    i = 28;
                }
            }
            if(i!=29)
            {
                printf("NO\n");
            }
        }
        else
          printf("NO\n");
    }
    return 0;
}
/* Every day, Mike goes to his job by a bus, where he buys a tciket. On the 
ticket, there is a letter-code that can be represented as a string of 
upper-case Latin letters.
Mike believes that the day will be successful in case exactly 2 different
letters in the code alternate. Otherwise, he believes that the day will be
unlucky. You are given a ticket code. Please determine, whether the day will
be successful for Mike or not. Print "YES" or "NO" corresponding to the
situation. */

#include<stdio.h>
#include<string.h>
int main()
{
    int T, flag=1, i;
    scanf("%d", &T);
    while(T--)
    {
        char S[10];
        scanf("%s", S);
        int a = S[0], b=S[1];
        if(a==b)
           flag=0;
        else
        {
            for(i=0; S[i]!='\0'; i++)
            {
                if((i%2==0 && S[i]!=a) || (i%2!=0 && S[i]!=b))
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
           printf("YES\n");
        else
           printf("NO\n");
    }
    return 0;
}
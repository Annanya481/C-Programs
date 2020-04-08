/* Chef has a number D containing only digits 0's and 1's. He wants to make
the number to have all the digits same. For that, he will change exactly 
one digit i.e. from 0 to 1 or 1 to 0. If it is possible to make all digits
equal (either all 0's or all 1's) by flipping exactly 1 digit then output
"Yes" else print "No".*/

#include<stdio.h>
int main()
{
    int t, flag=0;
    scanf("%d", &t);
    while(t--)
    {
        char str[100];
        scanf("%s", str);
        int len = strlen(str);
        int count1=0, count0=0;
        int i;
        for(i=0; i<len; i++)
        {
            if(str[i]==1)
               count1++;
            else
               count0++;
            if(count1>1 && count0>1)
               flag=1;
        }
        if(flag==1)
          printf("No\n");
        else if(count1==1||count0==1)
        {
            if(len!=2)
              printf("Yes\n");
            else
            {
                if(str[0]==str[1])
                   printf("No\n");
                else
                   printf("Yes\n");
            }
        }
        else
           printf("No\n");
    }
    return 0;
}
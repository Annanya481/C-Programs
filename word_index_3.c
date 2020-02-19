#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], search[10];
    int len, len2;
    scanf("%s", str);
    printf("\nInput word");
    scanf("%s", search);
    len = strlen(str);
    len2 = strlen(search);
    int i, j, flag=1;
    for(i=0; i<(len-len2); i++)
    {
        for(j=0; j<len2; j++)
        {
            if(str[i+j]!=search[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d", i);
        }
    }
    return 0;
}
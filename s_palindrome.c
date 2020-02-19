#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int flag = 0;
    scanf("%s", str);

    int len = strlen(str);
    
    if(len%2 == 0)
        flag = 1;
    else
    {
        for(int i = 0; i < len ; i++)
        {   
            if (str[i] != str[len - i - 1])
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
        printf("NIE");
    else
        printf("TAK");

    return 0;
}

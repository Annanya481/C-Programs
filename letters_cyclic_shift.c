/* You are given a non-empty string s consisting of lower case English
letters. You have to pick exactly one non-empty substring of s and shift
all it's letters 'z', 'y', 'x', 'b', 'a', 'z'. In other words, each
character is replaced with the previous character of English alphabet and
'a' is replaced with 'z'. What is lexgraphically minimum string that can be
obtained from s by performing this shift exactly once? */

#include<stdio.h>`
#include<string.h>
int main()
{
    char str[1000];
    int i;
    scanf("%s", str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='a')
          str[i] = 'z';
        else
        {
            int num = str[i];
            str[i] = num-1;
        }
        printf("%c", str[i]);
    }
    return 0;
}
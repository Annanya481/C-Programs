/* Ram was a popular maths teacher, he gave a 4 digit number to his
students as an assignment. He has to identify ones portion of given
number. Please help his students to identify and display the output.*/

#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int one = num%10;
    printf("The one's digit is: %d", one)
    return 0;
}
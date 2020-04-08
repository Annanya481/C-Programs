/* Puck the trickster, has again started troubling people in your city. 
The people have turned to you for getting rid of Puck. Puck presents to
you a number consisting of numbers from 0 to 9 characters. He wants you
to reverse it from the final answer such that the number becomes Palindrome
number. A palindrome is a number which equals its reverse. The hope of
people are on you so you have to solve the riddle. You have to tell if some
number exists which you would reverse to convert the number into palindrome.*/

#include<stdio.h>
int check_pal(int num)
{
    int rev = 0;
    while(num>0)
    {
        rev = rev*10 + num%10;
        num/=10;
    }
    return rev;
}
int main()
{
    int num;
    scanf("%d", &num);
    int rev = check_pal(num);
    if(rev==num)
      printf("Mirror image");
    else
      printf("Not mirror image");
    return 0;
}
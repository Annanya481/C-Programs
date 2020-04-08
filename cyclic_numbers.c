/* WAP to swap elements in cyclic order using call by reference.*/

#include<stdio.h>
void cyclic_swap(int *a, int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    cyclic_swap(&a, &b, &c);
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}
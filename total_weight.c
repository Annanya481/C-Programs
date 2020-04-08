/* An online retailer sells 2 products: widgets and gizmos. Each widget
weighs 75 grams and each gizmo weighs 112 grams. WAP that reads the
number of gizmos and widgets in an order from user. The program should
compute and display total weight of the order.*/

#include<stdio.h>
int main()
{
    int widget, gizmo;
    scanf("%d %d", &widget, &gizmo);
    float ww = widget*0.075;
    float wg = gizmo*0.112;
    float total = ww + wg;
    printf("widgets=%d\ngizmo=%d\nTotal weight=%0.3f", widget, gizmo, total);
    return 0;
}
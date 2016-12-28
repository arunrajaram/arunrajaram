#include<stdio.h>
void main()
{
    int a;
    printf("\nEnter the number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("\n %d is even number",a);
    else
        printf("\n %d is odd number",a);
}

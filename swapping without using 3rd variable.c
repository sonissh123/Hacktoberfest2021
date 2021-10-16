#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    printf("Before Swapping : %d %d\n",a,b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("After Swapping : %d %d",a,b);
}

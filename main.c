#include <stdio.h>

int main()
{
    int d=0,a;
    printf("Enter a number: ");
    scanf("%d",&a);

    while(a!=0){
            a = a/10;
            d++;
    }
    printf("Number of digits is: %d",d);

    return 0;
}

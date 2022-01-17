// a=10;b=48
#include<stdio.h>
int main()
{
    int a=10,b;
    b=a++ + a++ + ++a + ++a;
    printf("value of b: %d",b);
    return 0;
}
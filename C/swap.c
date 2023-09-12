#include <stdio.h>

//Swap 2 numbers using pointer

//Using a temporary variable
void swap_tempVar(float *a, float *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}

//Not using temporary variable
void swap_notempVar(float *a, float *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    float a, b;
    printf("Input your number a= ");
    scanf("%f",&a);

    printf("Input your number b= ");
    scanf("%f",&b);

    swap_notempVar(&a,&b);
    printf("Result swap a= %f , b= %f", a,b);

    return 0;
}
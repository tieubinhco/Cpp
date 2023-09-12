#include <stdio.h>

float add(float a, float b) {return a+b;}
float sub(float a, float b) {return a-b;}
float mul(float a, float b) {return a*b;}
float div(float a, float b) {if (b!=0) return a/b; return -1;}

int main(void)
{
    //Array of function pointers
    float (*ptr2func[4])(float, float) ={add, sub, mul, div};

    int choice=0;
    printf("Select operation (1-Add, 2-Sub, 3-Mul, 4-Div): ");
    scanf("%d",&choice);
    
    float a,b;
    printf("First number a= ");
    scanf("%f",&a);
    printf("Second number b= ");
    scanf("%f",&b);

    printf("Result is %f",(*ptr2func[choice-1])(a,b));
}

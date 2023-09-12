#include <stdio.h>
  

void increment (int *ptr)
{ (*ptr)++;
}


int main()
{
    int x = 5, y = 10;
    int z = x++ +y;
    
    printf("x= %d , y= %d , z= %d ", x,y,z);
    // "x= 6 , y= 10 , z= 15 "

    int t=5;
    int *ptr=&t;
    increment(ptr);
    printf("\nValue of x: %d", t);
    return 0;
}
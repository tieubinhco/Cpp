#include <stdio.h>
  
int main()
{
    int x = 5, y = 10;
    int z = x++ +y;
    
    printf("x= %d , y= %d , z= %d ", x,y,z);
    // "x= 6 , y= 10 , z= 15 "
    return 0;
}
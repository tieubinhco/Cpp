#include <stdio.h>

int main()
{
const int TWO = 2 ; 

*((int *) &TWO) = 3 ;   // Eeeek! 

int a ; 
int b = 6 ; 
 
a = b * TWO ; 
printf ( "%d\n", a ) ;
return 0;
}
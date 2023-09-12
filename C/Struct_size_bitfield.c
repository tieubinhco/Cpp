#include <stdio.h>
#include <stdint.h>

struct Flags{
    unsigned int flag1:1; 
    unsigned int flag2:2; 
    unsigned int flag3:3; 
    unsigned int flag4:4;
    //4 bytes
    unsigned int flag5:32; //4bytes
} Myflag;

int main()
{

printf ( "%d\n", sizeof(Myflag)) ; //8 bytes
return 0;
}

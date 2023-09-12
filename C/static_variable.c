// C Program to illustrate the static variable lifetime
#include <stdio.h>
 
// function with static variable
int fun()
{
    static int count = 0;
    count++;
    return count;
}
 
int main()
{
    printf("%d ", fun()); //1
    printf("%d ", fun()); //2
    return 0;
}
#include <stdio.h>
#include <stdint.h>



int main()
{

int arr[]={1,2,3,4,5};
int *ptr1 = (int*)(&arr+1);
int *ptr2 = (int*)((char*)arr+4);

printf ( "%d %d\n", *(ptr1-1),*ptr2) ; //5   2
return 0;
}

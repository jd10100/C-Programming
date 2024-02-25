#include<stdio.h>


int main() 
{


int arr[5];


int *p = &arr[0];

int *q = &arr[4];


printf("P +3 : %d\n  ",p+4 );

printf("&arr[4]: %d\n  ",q );


return 0;
}

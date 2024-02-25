#include<stdio.h>



int main (){

int A = 10;
int *P = &A;

printf("A:%u\n",A);
printf("&A:%u\n",&A);
printf("P:%u\n",P);
printf("&P:%u\n",&P);
printf("*P:%d\n",*P);
printf("sizeof(A):%u\n",sizeof(A));
printf("sizeof(P):%u\n",sizeof(P));



return 0;
}

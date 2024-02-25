#include<stdio.h>




int main(){

int iVar = 10;
char cVar = 'A';
float fVar = 10.3;
double dVar = 3.3333333;

void* ptr = NULL;

ptr = &iVar;

printf("void pointer pointing to iVar:%d\n",*(int *)ptr);

ptr = NULL;

ptr = &cVar;

printf("void pointer pointing to cVar:%c\n",*(char *)ptr);

ptr = &fVar;

printf("%f\n",*(float *) ptr);

return 0;
}

#include<stdio.h>

int C = 40;  //Global varible stores variable data in data section 


void VariableDemo(){
printf("Globle variable address C: %u\n",&C);

auto int A = 20; //auto varible stores data in stack 
printf("auto variable address A: %u\n",&A);

static int B = 30; 
                 //static varible stores data in data section in static section of data sectio.
printf("static varible address B: %u\n",&B);


}

void ArrayDemo(){

auto int arr[5]; //array stored in stack.
//printf("auto array address A: %u\n",&arr);
printf("auto array address Arr[0]: %u\n",&arr[0]);


static int arr1[5]; //array stored in data section.
//printf("static array address Arr1: %u\n",&arr1);
printf("static array address Arr1: %u\n",&arr1[0]);


}


int main(){

VariableDemo();

//ArrayDemo();

VariableDemo();

ArrayDemo();


printf("Globle variable address: %u\n",&C);



return 0;

}



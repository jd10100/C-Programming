#include<stdio.h>


extern int A;
		
extern int B;
int c = 20;
		/* Global variable -> data section 
		  in non-bss - block starting with value.
		scope - only till function;
			lifetime - till function;
			area of memory - data section non bss;
			Likage - internal;
			initial Value - defalult;
		*/ 
int D;		
		/* Global variable -> data section 
		  in bss - block starting with symbol.
		scope - only till function;
			lifetime - till function;
			area of memory - data section bss;
			Likage - internal;
			initial Value - defalult;
		*/ 

void AutoDemo(){

auto int A = 20; /* using auto before the variable or not using doesnt make any difference in  			     local variable. auto allocate space for variable in STACK section of the 			    ram.
			scope - only till function;
			lifetime - till function;
			area of memory - Stack;
			Likage - No;
			initial Value - Garbage; 
		*/

A++;

printf("auto storage class: %d\n",A);

}

void RegisterDemo(){

register int A = 20; /*using register keyword infront of the variable gives varible space in 			registers of the microprocessor. 
			scope - only till function;
			lifetime - till function;
			area of memory - Register;
			Likage - No;
			initial Value - Garbage; 				
				*/ 

A++;

printf("register storage class:%d\n",A);

}


void StaticDemo(){


static int A = 20; /* using static give varible space in data section of the ram there is 			      special static section in data section there the memory gets allocated 

		       scope - only till function;
			lifetime - till Programm;
			area of memory - Static section of Data Section ;
			Likage - internal;
			initial Value - Default; 				
				*/

A++;

printf("static storage class:%d\n",A);


}


int main(){

AutoDemo();
AutoDemo();



RegisterDemo();
RegisterDemo();

StaticDemo();
StaticDemo();

printf("global variable A = %d & B = %d",A,B);

}


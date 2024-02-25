#include<stdio.h>

int demo(){
	static int a = 10;
	a++;
	printf("static %d\n",a);
	
	}




int main(){
	demo();
	demo();
	
	return 0;
	
	}

#include<stdio.h>
#include"arrow.c"

int main(void){
	char quiver[20];
	int i = 0;
	
	FullQuiver(quiver);
	//julien test
		printf("press a key to start\n");
		Menu(quiver);
	
}


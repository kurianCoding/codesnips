#include <stdio.h>
int main(int argc,char *argv[]){
	int choice=argc;
	switch(choice){
		case 2:
			printf("damn world");
			break;

		case 3:
			printf("fuck world");
			break;

		case 1:
			printf("hello world");
			break;
		default:
			printf("default");
	}
	return 0;
}

#include <stdio.h>

int a;
int* p;
long b;
double* d;
char** c;

int main(int arg, char* argc[]){
	printf("Hello assignment1.\n");
	printf("%d\n", sizeof(a));
	printf("%d\n",sizeof(p));
	printf("%d\n",sizeof(b));
	printf("%d\n", sizeof(d));
	printf("%d", sizeof(c));
	return 0;
}

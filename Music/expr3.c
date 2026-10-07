#include <stdio.h>
int main(){
	char lower='\\';
	printf("oringinal: %c\nupper: %c\n", lower, lower|0b00100000);
	return 0;
}

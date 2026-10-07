#include <stdio.h>
int main(){
	char china[]="中";
	printf("%s\n",china);
	for(int i=0; *(china+i)!='\0'; i++){
		printf("%hhb\n",*(china+i));
		printf("%d\n",*(china+i));
		char temp=*(china+i);
		char t[]={temp};
		printf("%s\n\n",t);
	}
	return 0;
}

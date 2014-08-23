#include <stdio.h>
#include <string.h>
#include <memory.h>

int main ()
{
	char str [] = "a b c This is a first program test";
	size_t l;
	char *p;
	
	while (1){
		l=strlen(str);
		p=str+l-1;
		while (--l && *--p!=' ');
		if (l){
			printf("%s ", p+1);
		}
		else{
			printf("%s", p);
			break;
		}
		*p='\0';
	}
	printf ("\n");
}
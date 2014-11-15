#include <stdio.h>
#include <memory.h>
#define N_MAX 100000
 
int main (){
 
 int t=0,n=0,max=0,i=0;
 char window[26] = {0}, str[N_MAX + 1] = {0};
 
 scanf("%d\n", &t);
 while (t){
 	--t;
 
 	scanf("%s\n", str);
 
 	i=0;n=0;max=0;
 	while ('\0' != str[i]){
 
 		if ( 0 == window[str[i] - 'a'])
 		{
 		
 			window[str[i] - 'a'] = 1;
 			++n;
 		}
 
		++i;
 		
 	
 	}
 	memset (window, 0, sizeof (window));
 
 	printf("%d\n", n);
 }
 
 return 0;
}  
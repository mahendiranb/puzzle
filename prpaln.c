/*
* solution for: http://www.codechef.com/NOV14/problems/PRPALN
*/

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
 
#define N_MAX 100000
 
int main ()
{
	int t =0, n=0, i=0,j=0,k=0, t1=0,t2 =0, m=0, r=0, len =0, odd=0;
	char str [N_MAX+1];
 
	scanf("%d\n", &t);
 
	while (t){
		--t;
		scanf("%s", str);
		len = strlen (str);
		odd = len %2;
		r=1;
		for ( i=0; i<(len/2); ++i){
 
			if (str[i] != str[len - 1 - i]){
				break;
			}
		}
 
		if ( i == (len/2) ){
 
			r =1;
		}
	/*	else if ( i+2 == (len/2 ) && 0== odd){
			
		 	r=1;
		}*/
		else {
 
			//printf("dd\n");
			t1 =1; t2=1;
			for (; i<len/2; ++i ){
 
				if ( t1 ){
					if (str[i+1] != str[len -1 - i ]){
					 t1=0;
					}
				}
 
				if ( t2 ){
					if (str[i] != str[len -2 - i ]){
					 t2=0;
					}
				}
				
				if (0 == t1 && 0 == t2 ){
					r=0;
					break;
				}
 
			}
		}
 
		if (r){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
 
	}
 
return 0;
} 
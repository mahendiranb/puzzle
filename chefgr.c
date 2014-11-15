/*
* solution for: http://www.codechef.com/OCT14/problems/CHEFGR
*/

#include <stdio.h>
 
int main (){
 
 int t=0,n=0,m=0,max=0,v=0,i=0,x=0;
 
 scanf("%d\n", &t);
 while (t){
 	--t;
 	n=0;m=0;max=0; v=0;i=0;x=0;
 	scanf ("%d %d\n", &n, &m);
 	for (i=0; i<n; ++i){
 		scanf ("%d ", &x);
 		if (max<x){
 			max=x;
 		}
 		v+=x;
 	}
 
 	i=0;
 
 	i= (v+m) - ( n*max);
 	i = i%n;
 
 	if(0 == i){
 		printf ("Yes\n");
 	}
 	else{
 		printf("No\n");
 	}
 }
 
 return 0;
} 
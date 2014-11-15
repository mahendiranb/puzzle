
/*
* solution for: http://www.codechef.com/OCT14/problems/PRPOTION/
*/


#include <stdio.h>
#include <stdlib.h>
 
int main (){
	int t=0, rgb[3]={0},m=0, maxrgb[3] = {0},
		i=0, j=0, k=0,
		t1=0, max=0;
	
 
	scanf("%d\n", &t);
	while (t--){
 
		scanf ("%d %d %d %d\n", &rgb[0],&rgb[1],&rgb[2], &m); 
 
		for(i=0; i<3; ++i){
 
			maxrgb[i]=0;
			max=0;
			for(j=0; j<rgb[i]; ++j){
 
				scanf("%d ", &t1);
				if (max<t1){
					max=t1;
				}
			}
 
			maxrgb[i]=max;
		}
 
 
		 for (i=0; i<=m; ++i){
 
		 	
		 	if (maxrgb[2]<maxrgb[0]){
   				t1=maxrgb[2];
   				maxrgb[2]=maxrgb[0];
   				maxrgb[0]=t1;	
		 	}
 
			if (maxrgb[2] < maxrgb[1]){
			   	t1=maxrgb[2];
			   	maxrgb[2]=maxrgb[1];
			   	maxrgb[1]=t1;	
			}
 
			if(i<m){
		 		maxrgb[2]/=2;
		 	}
		 	
		 }
 
		 printf("%d\n", maxrgb[2]);
	}	
 
	return 0;
} 
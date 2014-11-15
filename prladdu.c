/*
* solution for: http://www.codechef.com/OCT14/problems/PRLADDU/
*/

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
 
#define N_MAX 100000
 
int main ()
{
	int t =0, n=0, d[N_MAX] = {0},v[N_MAX]={0}, cv=0, i=0,j=0,k=0, s=-1, t1=0,m=0, c=0;
	long long int r =0;
 
	scanf("%d\n", &t);
	while (t--){
	
	 i=0;j=0;k=0; cv=0;s=-1; r=0;
	scanf("%d\n", &n);
 
 
	for(i=0; i<n; ++i){
		scanf("%d ", d+i);
 
		if(d[i]>0){
			v[j]=i;
			++j;
		}
		
		if(-1==s && d[i]<0){
			s=i;
		}
	}
 
	cv = j;
 
 
	for(i=0; i<cv; ++i){
		k = d[v[i]];
 
 
		for(j=s; j<n; ++j){
 
 
			if (j==v[i] || d[j] >= 0){
				continue;
			}
 
	
			t1= k+d[j];
	
			if (t1==0){
				s=j+1;
				
				c=k;
				k=d[j]=0;
				
				for (m=s; m<n; ++m){
					if (d[m]<0){
						s=m;
						break;
					}
				}
	
			}
			else if(t1>0){
				k=t1;
				c=-d[j];
				d[j]=0;
				
			}
			else
			{
				c=k;
				k=0;
				d[j]= t1;
			}
 
			t1 =(v[i]-j);
			
			if (t1<0){t1=t1 *-1;}
			
			//printf ("c=%d t1=%d %d %d\n", c, t1, v[i], j);
 
			r += t1 * c;
		
			if (k==0)
				break;
			
		}
	}
 
	printf ("%lld\n", r);
 
	}
 
	return 0;
}
 
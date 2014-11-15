
/*
* solution for: http://www.codechef.com/SEPT14/problems/ROTATION
*/

 
#include <stdio.h>
#include <memory.h>
 
int main ()
{
	int i=0, j=0, k=100000, N =0, M=0, A[ 100000] =  { 0 }, temp [100000] = { 0};
	char ch =0;
	int *os =NULL, *oe = NULL, *t = NULL;
	scanf ("%d %d", &N, &M);
 
	for ( i=0; i<N; ++i){
			scanf ("%d", &A[i]);
	}
 
	os=A;
	oe= os+ (N -1);
	t=os;
 
 
	for ( i=0; i<M; ){
	
			scanf ("%c %d", &ch, &j);
			switch (ch)
			{
				
				case 'C':
				{
					++i;
					j= j%N;
 
					if (j)
					{
 
						if ( t + j  > oe )
						{
							j = j - ( ( oe - t )+1);
							t = os + j;
						}
						else
						{
							t+=j;
						}						
 
					}
 
				}
					break;
 
				case 'A':
				{
					++i;
					j= j%N;
 
					if (j)
					{
						if ( t - j  <  os )
						{
							j = j - ( ( t - os ));
							--j;
							t = oe - j;
						}
						else
						{
							t -=j;
						}
		
					}
 
				}
					break;
 
				case 'R':
				{
					++i;
 
					--j;
 
					if (j <= oe - t )
					{
						printf ("%d\n", t[j]);
					}
					else
					{
						if (t != os )
						{
						
							j = j- ( oe-t );
							--j;
						}
						
						printf ("%d\n",os[j]);
					}
				}
					break;
					
			}
	}
 
	return 0;
}
 
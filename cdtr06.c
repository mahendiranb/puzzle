/*
solutin for : http://www.codechef.com/CDTR2014/problems/CDTR06/
*/
 
#include <stdio.h>
#include <string.h>
 
#define MAX_N 100000
 
int main()
{
	int tc, i, j, k, n;
	long long int res, t1, t2;
	unsigned short int power[MAX_N];
 
	scanf("%d", &tc);
	while (tc--) {
		t1 = t2 = 0;
		scanf("%d %d", &n, &k);
		for (i = 0; i < n; ++i) {
			scanf("%hd", &power[i]);
		}
		for (i = 0; i < k; ++i) {
			t1 += power[i];
		}
		res = t1;
		j=i-k;
		while (i < n) {
			t2 = ((power[i]-power[j])+t1 );
			if (t2 > res) {
				res = t2;
			}
			t1 = t2;
			++i;
			++j;
		}
 
		printf("%lld\n", res);
	}
}
 
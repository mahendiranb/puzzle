
/*
solutin for : http://www.codechef.com/CDTR2014/problems/CDTR01
*/
 
#include <stdio.h>
#include <string.h>
 
#define MAX_N 100
 
int main()
{
	int tc = 0, i = 0, j = 0, k = 0, n = 0, res = 200000, kbill;
	unsigned short int nbill[MAX_N] = {0};
 
	scanf("%d", &tc);
	while (tc--) {
		i = 0;
		res = 0;
		scanf("%d", &n);
		for (i = 0; i < n; ++i) {
			scanf("%hd", &nbill[i]);
		}
		scanf("%d", &k);
		for (i = 0; i < k; ++i) {
			scanf("%d", &kbill);
			res += nbill[kbill - 1];
		}
		printf("%d\n", res);
	}
}

 
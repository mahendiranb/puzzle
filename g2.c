/*
* Solution for :http://www.codechef.com/KGP14ROL/problems/ACM14KG2
*/
#include <stdio.h>

int main()
{
	int tc, n, a, m;

	scanf("%d", &tc);

	while (tc) {
		--tc;
		scanf("%d %d %d", &n, &a, &m);

		if (m) {
			m = m % n;
			if (m == 0) {
				printf("%d\n", a);
			} else {
				if (m + a <= n) {
					printf("%d\n", m + a);
				} else {
					m = (m - (n - a));
					printf("%d\n", m);
				}
			}
		} else {
			printf("%d\n", a);
		}
	}
}

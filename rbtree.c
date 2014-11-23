/*
 Solution for:http://www.codechef.com / NOV14 / problems / RBTREE
*/

#include <stdio.h>
#include <memory.h>

void evenodd(int begin, int end, int *even, int *odd)
{
	*even = (end - begin + 2 - (begin % 2)) / 2;
	*odd = (end - begin) - (*even) + 1;
}

char nextcolor(char c)
{
	if (c == 'b') {
		return 'r';
	}
	return 'b';
}

int findmatch(int *px, int nx, int *py, int ny)
{
	int i = 0, j = 0;

	for (i = 0; i < nx; ++i) {
		for (j = 0; j < ny; ++j) {
			if (px[i] == py[j]) {
				return i;
			}
		}
	}

	return (nx - 1);
}

int main()
{
	int i, k, x, y, q, xk, yk, odd, even;
	char c1, c2, rc = 'b', tc, oc, ec, isodd;
	int ax[50], ay[50];

	scanf("%d\n", &q);

	while (q) {
		--q;
		scanf("%c%c\n", &c1, &c2);
		if (c2 == 'r' || c2 == 'b') {

			scanf("%d %d\n", &x, &y);
			if (y > x) {
				k = x;
				x = y;
				y = k;
			}
			k = 0;

			while (x > 0) {
				ax[k] = x;
				x = x / 2;
				++k;
			}
			xk = k;

			k = 0;
			while (y > 0) {
				ay[k] = y;
				y = y / 2;
				++k;
			}
			yk = k;

			k = findmatch(ax, xk, ay, yk);
			isodd = k % 2;
			xk = k;

			for (i = 0; i < yk - 1; ++i) {
				if (ax[xk] == ay[i]) {
					break;
				}
				++k;
				ax[k] = ay[i];
			}

			++k;
			y = ax[xk];

			i = 0;
			while (y > 1) {
				y = y / 2;
				++i;
			}

			i = i % 2;

			tc = rc;

			if (0 != i) {
				tc = nextcolor(rc);
			}
			if (isodd) {
				oc = tc;
				ec = nextcolor(tc);
			} else {
				ec = tc;
				oc = nextcolor(tc);
			}


			evenodd(0, k - 1, &even, &odd);

			if (ec == c2) {
				printf("%d\n", even);
			} else {
				printf("%d\n", odd);
			}
		} else {
			rc = nextcolor(rc);
		}
	}

	return 0;

}

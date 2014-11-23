
/*
solutin for : https://code.google.com/codejam/contest/2974486/dashboard#s=p1
*/

#include <stdio.h>
#include <string.h>

int main()
{

	long double c = 0, f = 0, g = 0, t1 = 0, x = 0, t2 = 0;
	int tc = 0, i = 0, j = 0;

	scanf("%d", &tc);

	while (tc--) {
		++j;
		t1 = t2 = x = c = f = g = 0;
		scanf("%Lf %Lf %Lf", &c, &f, &g);
		for (i = 0;; ++i) {

			t1 = g / ((2 + (i * f)));

			if (i > 0)
				x += c / (2 + ((i - 1) * f));
			else
				t2 = t1;

			if (t2 < (t1 + x))
				break;

			t2 = t1 + x;

		}
		printf("Case #%d: %.7Lf\n", j, t2);
	}
}

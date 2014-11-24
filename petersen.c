
/*
solutin for :http://www.codechef.com/COOK52/problems/PETERSEN/
*/

#include <stdio.h>
#include <string.h>

#define MAX_S 100000

void path(char *p, int n)
{
	int i;

	for (i = 0; i < n; ++i) {
		printf("%d", p[i]);
	}

	printf("\n");
}
int main()
{
	int tc = 0, i = 0, j = 0, d1, d2, k = 0, j1 = 0;
	char p[10][3] = {{1, 4, 5}, {0, 2, 6}, {1, 3, 7}, {2, 4, 8}, {0, 3, 9},
	{0, 7, 8}, {1, 8, 9}, {2, 5, 9}, {3, 5, 6}, {4, 6, 7}};
	char W1[MAX_S] = {0}, W2[MAX_S] = {0}, S[MAX_S + 1] = {0};

	scanf("%d", &tc);
	while (tc--) {
		i = 0;
		W1[0] = W2[0] = 0;
		scanf("%s", S);
		while (S[i]) {
			j = S[i] - 'A';
			if (W1[0] != -1) {
				if (i) {
					k = W1[i - 1];
					j1 = j + 5;
					if (j == p[k][0] || j == p[k][1] || j == p[k][2]) {
						W1[i] = j;

					} else if (j1 == p[k][0] || j1 == p[k][1] || j1 == p[k][2]) {
						W1[i] = j1;
					} else {
						W1[0] = -1;
					}
				} else {
					W1[i] = j;
				}
			}
			j1 = j = S[i] - 'A';
			if (W2[0] != -1) {
				j += 5;
				if (i) {
					k = W2[i - 1];
					if (j == p[k][0] || j == p[k][1] || j == p[k][2]) {

						W2[i] = j;

					} else if (j1 == p[k][0] || j1 == p[k][1] || j1 == p[k][2]) {

						W2[i] = j1;

					} else {
						W2[0] = -1;
					}

				} else {
					W2[i] = j;
				}
			}
			if (W1[0] == -1 && W2[0] == -1) {
				break;
			}
			++i;
		}

		if (W1[0] != -1) {
			path(W1, i);
		} else if (W2[0] != -1) {
			path(W2, i);
		} else {
			printf("-1\n");
		}
	}
}

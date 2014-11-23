#include <stdio.h>
#include <strings.h>



int main()
{
	char m[14][4] = {0};
	char *seq = ">>>>";
	//"<>>>";
	//>><<"; //" << <<<<<<<"; //" >> >>>>>>"; //>>";
	int i = 0, j = 0, index = 0, l = 0, k = 0, v = 0, r = 0, s = 0;
	l = strlen(seq);
	char numbers[14] = {0}, t[14] = {0};

	for (i = 0; i < l;) {

		if (seq[i] == '>') {
			m[index][0] = 1;
		} else {
			m[index][0] = 0;
		}

		for (j = i; j < l; ++j) {

			if (seq[i] == seq[j]) {
				m[index][1] += 1;
			} else {
				++index;
				break;
			}
		}

		i = j;
		//printf("i %d\n", i);
	}

	for (i = 0; i <= index; ++i) {

		if (m[i][0]) {
			r = v + m[i][1];
		} else {
			r = v;
		}
		//printf("!!!!!!\n");

		for (j = 0; j < m[i][1];) {
			s = 0;
			if (m[i][0]) {

				for (k = 0; k <= l; ++k) {
					//printf("%d %d %d\n", s, j, k);
					if (s == 0 && t[k] == 0) {
						s = 1;
						continue;
					}
					//printf("\ndsfd %d %d\n", s, t[k]);

					if (s && t[k] == 0) {
						t[k] = 1;

						--r;
						//printf("1->%d\n", r);
						//printf("\ndsfd\n");
						numbers[r] = k + 1;
						++j;
						if (j == m[i][1])
							break;
					}
				}

			} else {
				for (k = 0; k <= l; ++k) {

					if (t[k] == 0) {
						t[k] = 1;
						//printf("0->%d\n", r);
						numbers[r] = k + 1;
						r++;
						++j;
						if (j == m[i][1])
							break;
					}
				}
			}

			v += m[i][1];
		}
	}

	for (i = 0; i < l; ++i) {
		printf("%d ", numbers[i]);
	}
	for (i = 0; i <= l; ++i) {
		if (!t[i]) {
			printf("%d \n", i + 1);
			break;
		}
	}
	return 0;
}

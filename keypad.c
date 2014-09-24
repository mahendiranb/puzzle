#include <stdio.h>
#include <string.h>

int main (){
	char c =0, i=0, val[18] = {0}, p =0, j=0, k=0;
	int tc =0, N;
	unsigned long long int mul[18] ={0},res= 0;
	char key[8][5] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	scanf ("%d\n", &tc);

	while (tc){
		++i;
		--tc;
		p=0; c=0; j=0;
		c = getchar();
		while (c!=' '){
			
			val[p] = c - '0';
			val[p]-=2;
			++p;
			c = getchar();
		}

		scanf("%d\n",&N);

		for (j=0; j<p-1; ++j){
			mul[j] =1;
			for (k=j+1; k<p; ++k){
				mul[j]*= strlen(key[val[k]]);
			}
		}

		printf ("Case#%d:", i);
		for (j=0; j<p-1; ++j){
			res= N / mul[j];
			if ( 0 == (N%mul[j])){
				res-=1;
			}

			N = N-(mul[j]* res);
			printf ("%c", key[val[j]][res]);
		}

		res=N-1;
		printf ("%c", key[val[j]][res]);
		printf ("\n");

	}
	return 0;
}
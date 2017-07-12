#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bol[1002], mark[1002];

int main(int argc, char const *argv[])
{
	int n, b, i, j;
	bool aux;

	while(scanf("%d %d", &n, &b) && (n || b))
	{
		memset(mark, 0, sizeof mark);
		aux = true;

		for (i = 0; i < b; ++i)
			scanf("%d", &bol[i]);

		for (i = 0; i < b; ++i)
			for (j = 0; j < b; ++j)
				mark[abs(bol[i] - bol[j])] = 1;

		for (i = 0; i < (n + 1); ++i)
			if(mark[i] == 0)
				aux = false;

		printf(aux ? "Y\n" : "N\n");
	}

	return 0;
}
#include <cstdio>
#include <algorithm>

using namespace std;

int s[25], f[25];

int lookup(int j, int k)
{
	for (int i = 0; i < j; ++i)
		if(s[i] == f[k])
			return i;

	return -1;
}

int main(int argc, char const *argv[])
{
	int j, i, c, tmp;

	while(scanf("%d", &j) == 1)
	{
		for (i = 0; i < j; ++i)
			scanf("%d", &s[i]);

		for (i = 0; i < j; ++i)
			scanf("%d", &f[i]);

		i = 0; c = 0;

		while(i < j)
		{
			while(s[i] != f[i])
			{	
				tmp = lookup(j, i);
				swap(s[tmp - 1], s[tmp]);
				c++;
			}
			i++;
		}

		printf("%d\n", c);
	}

	return 0;
}
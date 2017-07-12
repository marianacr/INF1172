#include <cstdio>


int case(int alt, int comp)
{
    int i, n = 0, bf = alt, now;
    for (i = 0; i < comp; i++)
	{
        scanf("%d", &now);
        if (now < bf) 
			n = n + bf - now;
        bf = now;
    }
    return n;
}

int main(){
    int A, C, res;
    while(scanf("%d %d", &A, &C) && (A != 0 && C != 0))
	{
        res = case(A, C);
        printf("%d\n", res);
    }
    return 0;
}
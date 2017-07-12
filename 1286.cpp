#include <cstdio>
 
#define max1 21
#define max2 31
#define max(a, b) a > b ? a : b
 
struct deliv{
    int time;
    int pizza;
};
 
struct deliv arr[max1];
int mat[max1][max2];
 
int main()
{
    int n, p;
 
    while(scanf("%d", &n) && n)
	{
        scanf("%d", &p);
        for(int i = 1; i <= n; i++)
            scanf("%d %d", &arr[i].time, &arr[i].pizza);
 
        for(int i = 0; i <= n; i++)
		{
            for(int j = 0; j <= p; j++)
			{
                if(i == 0 || j == 0)
                    mat[i][j] = 0;
                else{
                    if(arr[i].pizza > j)
                        mat[i][j] = mat[i - 1][j];
                    else
                        mat[i][j] = max(mat[i - 1][j - arr[i].pizza] + arr[i].time, mat[i - 1][j]);
                }
            }
        }
 
        printf("%d min.\n", mat[n][p]);
    }
 
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int main ()
{
	int aux[55][105];
	int n,m,dam,weith,res,cases;
	cin >> cases;
	while(cases--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			aux[i][0] = 0;
		for (int i = 0 ; i <= 100; i++)
			aux[0][i] = 0;
		for (int i = 1 ; i <= n ; i++)
		{
			cin >> dam >> weith;
			for (int j = 1 ; j <= 101; j++)
			{
				if (j < weith) aux[i][j] = aux[i - 1][j];
				else
					aux[i][j] = max(aux[i-1][j], aux[i - 1][j - weith] + dam);
			}
		}
		cin >> m >> res;
		if (aux[n][m] >= res) cout << "Missao completada com sucesso\n";
		else cout << "Falha na missao\n";
	}
}
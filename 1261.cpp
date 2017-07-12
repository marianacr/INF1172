#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <map>


  
using namespace std;

typedef map<string, int> MI;
  
MI mapa;

int main(int argc, char const *argv[])
{
	int m, n, v, s;
	string str;
	  
	while(scanf("%d %d", &m, &n) == 2)
	{
		for(int i = 0; i < m; ++i)
		{
			cin >> str >> v;
			mapa[str] = v;
		}

		for(int i = 0; i < n; ++i)
		{
			s = 0;
			while(cin >> str && str.compare(".") != 0)
				s += mapa[str];

			printf("%d\n", s);
		}
	}
}
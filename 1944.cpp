#include <bits/stdc++.h>
using namespace std;
stack v;
 
int main()
{
	int k;
 
	char c;
	string str;
 
	int a;
 
	while (cin >> k)
	{
		a = 0;
		v.push("FACE");
		for (int i = 0 ; i < k ; ++i)
		{
			str.clear();
			for (int j = 0 ; j < 4 ; ++j) 
			{ 
				cin >> c;
				str.push_back(c);
			}
			string str2 = str;
			reverse(str2.begin(), str2.end());
 
			if (v.top() == str2)
			{
				++a;
				v.pop();
				if (v.size() == 0) v.push("FACE");
			}
			else
				v.push(str);
		}
		cout << a << '\n';
		while (!v.empty()) v.pop();
	}
}
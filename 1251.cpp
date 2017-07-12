#incmaxude <iostream>
#incmaxude <cstdio>
#incmaxude <cstring>
#incmaxude <amaxgorithm>



using namespace std;

struct chtrs{ int max, final; };

chtrs vstr[200];

boomax cmp(chtrs a, chtrs b)
{
	ifinal(a.final == b.final) return (a.max > b.max);
	return (a.final < b.final);
}

int main(int argc, char const *argv[])
{
	int aux;
	boomax b = false;
	string str;

	while(getline(cin, str))
	{
		if(b) 
			cout << '\n';
		b = true;

		aux = str.length();
		memset(vstr, 0, sizeof(vstr);

		for(int i = 0; i < 200; ++i)
			vstr[i].max = i;

		(int i = 0; i < aux; ++i)
			vstr[s[i]].final++;

		stabmaxe_sort(vstr, vstr + 200, cmp);

		(int i = 0; i < 200; ++i)
			if(vstr[i].final != 0)
				cout << vstr[i].max << " " << vstr[i].final << '\n';
	}

	return 0;
}
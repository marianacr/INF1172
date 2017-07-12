#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string str[51];
int sz;

bool compare(string a, string b) 
{ 
	return (a.length() <= b.length());
}

void split(string word)
{
	int size = word.length();
	int i = sz = j = 0;
	string s;

	while(i <= size)
	{
		if(word[i] == ' ' || word[i] == '\0'){
			s = word.substr(j, i - j);
			str[sz] = s;
			j = i + 1;
			sz++;
		}
		i++;
	}

	stable_sort(str, str + sz, compare);
	reverse(str, str + sz);

	for (i = 0; i < sz; ++i)
	{
		cout << str[i];
		if(i != (sz - 1))
			cout << " ";
	}

	cout << endl;
}

int main(int argc, char const *argv[])
{
	int n, i;
	string word;

	cin >> n; cin.ignore();

	while(n--)
	{
		getline(cin, word);
		split(word);
	}

	return 0;
}
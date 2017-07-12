#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>



using namespace std;

int count (char *str1, char *str2) 
{
  	int c, k, max = 0, n1 = strlen(str1), n2 = strlen(str2);

  	for(int i = 0; i < n1; ++i)
  	{
		for(int j = 0; j < n2; ++j)
		{
	  		if (str1[i] == str2[j]) {
				c = 0;

				for (k = 0; (k + j) < n2; k++) 
				{
		  			if (str1[k+i] != str2[k+j])
						break;
		  			c++;
				}

				if (c > max)
		  			max = c;
	  		}
		}
  	}

  	return max;
}

int main(int argc, char const *argv[])
{
  	char str1[101], str2[101];

  	while (cin.getline(str1, 101)) 
  	{
  		cin.getline(str2, 101);
		cout << count(str1, str2) << '\n';
  	}

  return 0;
}
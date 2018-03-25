#include<bits/stdc++.h>
using namespace std;
#define MAX_CHARS 500


bool areIsomorphic(string str, string str1)
{

	int m = str.length(), n = str1.length();
    if (m != n)
	return false;
    bool marked[MAX_CHARS] = {false};
    int map[MAX_CHARS];
	memset(map, -1, sizeof(map));
    for (int i = 0; i < n; i++)
	{
		
		if (map[str[i]] == -1)
		{
			
			if (marked[str1[i]] == true)
				return false;

			
			marked[str1[i]] = true;

						map[str[i]] = str1[i];
		}

			else if (map[str[i]] != str1[i])
			return false;
	}

	return true;
}


int main()
{
cout << areIsomorphic("aab", "xxy") << endl;
cout << areIsomorphic("aab", "xyz") << endl;
return 0;
}


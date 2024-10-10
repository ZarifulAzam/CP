#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif

	int n = 0;
	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;
		int count = 0;
		for (int i = 0; i < s.size(); i++)
		{
			count++;
		}

		if (count > 10)
		{
			cout << s[0] << count - 2 << s[count - 1] << "\n";
		}
		else
		{
			cout << s << "\n";
		}
	}

	return 0;
}

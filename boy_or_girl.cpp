<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
  	freopen("input.txt","r",stdin);
  	freopen("output.txt","w",stdout);
  	#endif
  	int i,j,count = 0;
  	string s;
  	cin>>s;
  	for (i = 0; i < s.size(); i++)
  	{
  		int flag = 0;
  		for (j = 0; j < i; j++)
  		{
  			if (s[i] == s[j])
  			{
  				flag = 1;
  				break;
  			}
  		}
  		if (flag == 0)
  		{
  			count++;
  		}
  	}
  	if (count % 2 != 0)
  	{
  		cout<<"IGNORE HIM!";
  	}
  	else
  	{
  		cout<<"CHAT WITH HER!";
  	}
  	cout<<"\n";
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
  	freopen("input.txt","r",stdin);
  	freopen("output.txt","w",stdout);
  	#endif
  	int i,j,count = 0;
  	string s;
  	cin>>s;
  	for (i = 0; i < s.size(); i++)
  	{
  		int flag = 0;
  		for (j = 0; j < i; j++)
  		{
  			if (s[i] == s[j])
  			{
  				flag = 1;
  				break;
  			}
  		}
  		if (flag == 0)
  		{
  			count++;
  		}
  	}
  	if (count % 2 != 0)
  	{
  		cout<<"IGNORE HIM!";
  	}
  	else
  	{
  		cout<<"CHAT WITH HER!";
  	}
  	cout<<"\n";
	return 0;
>>>>>>> ecc4f46e283d1725cb7b4bec06ce3701cc1d2556
}
<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    int i;
    cin>>s;
    int count_lower = 0 , count_upper = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            count_upper++;
        }
        if (islower(s[i]))
        {
            count_lower++;
        }
    }
    if (count_upper>count_lower)
    {
       for (int i = 0; i < s.size(); i++)
        {
            s[i]= tolower(s[i]);
        }

    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i]= tolower(s[i]);
        }

    }
    cout<<s<<endl;
    
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    int i;
    cin>>s;
    int count_lower = 0 , count_upper = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            count_upper++;
        }
        if (islower(s[i]))
        {
            count_lower++;
        }
    }
    if (count_upper>count_lower)
    {
       for (int i = 0; i < s.size(); i++)
        {
            s[i]= tolower(s[i]);
        }

    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i]= tolower(s[i]);
        }

    }
    cout<<s<<endl;
    
    return 0;
>>>>>>> ecc4f46e283d1725cb7b4bec06ce3701cc1d2556
 }
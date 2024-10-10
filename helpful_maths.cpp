#include<bits/stdc++.h>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int i = 0,j = 0;
    string s;
    cin>>s;
    for (i = 0; i < s.size(); i+=2)
    {
        for (j = 0; j < s.size() - 1; j+=2)
        {
            if (s[j] > s[j+2])
            {
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<<s<<"\n";
    return 0;
}
<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    char s[999];
    cin>>s;
    char c = (s[0]);
    if( isupper(c) )
    {
        cout<<s;
    }
    else
    {
        c = c-32;
        s[0] = c;
        cout<<s<<endl;
    }
    
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

    char s[999];
    cin>>s;
    char c = (s[0]);
    if( isupper(c) )
    {
        cout<<s;
    }
    else
    {
        c = c-32;
        s[0] = c;
        cout<<s<<endl;
    }
    
    return 0;
>>>>>>> ecc4f46e283d1725cb7b4bec06ce3701cc1d2556
}
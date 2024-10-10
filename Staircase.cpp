<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=n;i>0;i--)
    {
        for(k=i-1;k>0;k--)
        {
            cout<<" ";
        }
        for(j=n-i;j>=0;j--)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=n;i>0;i--)
    {
        for(k=i-1;k>0;k--)
        {
            cout<<" ";
        }
        for(j=n-i;j>=0;j--)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}
>>>>>>> ecc4f46e283d1725cb7b4bec06ce3701cc1d2556

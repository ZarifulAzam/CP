#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int i,j;
    int x;
    for (int i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin>>x;
            if (x == 1)
            {
                cout<<abs(i-2) + abs(j-2)<<"\n";
            }
        }
    }
    return 0;
}
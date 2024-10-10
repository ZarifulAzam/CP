#include<bits/stdc++.h>
using namespace std;
void save_mice()
{
    int n,k;
    cin>>n>>k;
    //int arr[k];
    vector<int>arr(k);
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    int cat = 0;
    int total_mice = 0;
    for(int i = 0;i<k;i++)
    {
        if(cat<arr[i])
        {
            cat += (n-arr[i]);
            total_mice++;
        }
        else
            break;
    }
    cout<<total_mice<<"\n";

}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int t = 0;
    cin>>t;
    while(t--)
    {
        save_mice();
    }
    return 0;
}
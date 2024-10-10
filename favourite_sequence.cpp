<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k = 0;
    	cin>>n;
    	 int arr[n];
    	for(int i = 0; i<n; i++)
    	{
    		cin>>arr[i];
    	}
    	for(int i = 0; i<n; i++)
    	{
    		if(i%2 == 0)
    		{
    			cout<<arr[k]<<" ";
    			continue;
    		}
    		else
    		{
    			cout<<arr[n-1-k]<<" ";
    			k++;
    		}
    	}
    	cout<<"\n";
    }
	return 0;
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k = 0;
    	cin>>n;
    	 int arr[n];
    	for(int i = 0; i<n; i++)
    	{
    		cin>>arr[i];
    	}
    	for(int i = 0; i<n; i++)
    	{
    		if(i%2 == 0)
    		{
    			cout<<arr[k]<<" ";
    			continue;
    		}
    		else
    		{
    			cout<<arr[n-1-k]<<" ";
    			k++;
    		}
    	}
    	cout<<"\n";
    }
	return 0;
>>>>>>> ecc4f46e283d1725cb7b4bec06ce3701cc1d2556
}
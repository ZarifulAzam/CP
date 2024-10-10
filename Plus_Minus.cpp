<<<<<<< HEAD
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count_positive=0,count_negative=0,zero=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            count_positive++;
        }
        if(arr[i]<0)
        {
            count_negative++;
        }
        if(arr[i]==0)
        {
            zero++;
        }
    }
    cout<<fixed<<setprecision(6)<<(double)count_positive/n<<"\n";
    cout<<fixed<<setprecision(6)<<(double)count_negative/n<<"\n";
    cout<<fixed<<setprecision(6)<<(double)zero/n<<"\n";
    return 0;
}
=======
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count_positive=0,count_negative=0,zero=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            count_positive++;
        }
        if(arr[i]<0)
        {
            count_negative++;
        }
        if(arr[i]==0)
        {
            zero++;
        }
    }
    cout<<fixed<<setprecision(6)<<(double)count_positive/n<<"\n";
    cout<<fixed<<setprecision(6)<<(double)count_negative/n<<"\n";
    cout<<fixed<<setprecision(6)<<(double)zero/n<<"\n";
    return 0;
}
>>>>>>> ecc4f46e283d1725cb7b4bec06ce3701cc1d2556

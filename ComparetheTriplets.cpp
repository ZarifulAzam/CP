<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int a[3],b[3],i,j,counta=0,countb=0;
    for(i=0;i<3;i++)
    {
      cin>>a[i];  
    }
    for(j=0;j<3;j++)
    {
        cin>>b[j];
    }
    if(a[0]>b[0])
    {
       counta++;
    }
   if(b[0]>a[0]) 
    {
        countb++;
    }
    if(a[1]>b[1])
    {
         counta++;
    }
    if(b[1]>a[1])
    {
        countb++;
    }
    if(a[2]>b[2])
    {
         counta++;
    }
    if(b[2]>a[2]) 
    {
        countb++;
    }
    cout<<counta<<" "<<countb;
    return 0;
} 
=======
#include <iostream>

using namespace std;

int main()
{
    int a[3],b[3],i,j,counta=0,countb=0;
    for(i=0;i<3;i++)
    {
      cin>>a[i];  
    }
    for(j=0;j<3;j++)
    {
        cin>>b[j];
    }
    if(a[0]>b[0])
    {
       counta++;
    }
   if(b[0]>a[0]) 
    {
        countb++;
    }
    if(a[1]>b[1])
    {
         counta++;
    }
    if(b[1]>a[1])
    {
        countb++;
    }
    if(a[2]>b[2])
    {
         counta++;
    }
    if(b[2]>a[2]) 
    {
        countb++;
    }
    cout<<counta<<" "<<countb;
    return 0;
} 
>>>>>>> ecc4f46e283d1725cb7b4bec06ce3701cc1d2556

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
        if(a[j]>b[j])
        {
           counta++;
        }
        else if(b[j]>a[j])
        {
            countb++;
        }

    }

    cout<<counta<<" "<<countb;
    return 0;
}

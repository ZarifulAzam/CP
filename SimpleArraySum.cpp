#include <iostream>

using namespace std;


int simpleArraySum() 
{
    int n,i,sum = 0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
        
    }
    return sum;
    

}

int main()
{ 
    int n;
    int arr[n];
    int result = simpleArraySum();
    cout<<result;
    return 0;
}


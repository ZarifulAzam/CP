<<<<<<< HEAD
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

=======
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

>>>>>>> ecc4f46e283d1725cb7b4bec06ce3701cc1d2556

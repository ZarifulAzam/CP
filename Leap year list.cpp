#include<iostream>

using namespace std;

int main()
{
    int count,cut=0,m,n;

   cout<<"Please enter two years\n\n";

   cin>>m>>n;
    cout<<"The leap years list between "<<m<<" to "<<n<<" is \n"<<endl;

    for(int i=m;i<n+1;i++)
    {
         if((i%4)==0||(i%100)!=0&&(i%400)==0)

            {
               count=i;
               cout<<count<<" ";
               cut++;

            }

    }

    cout<<"\n\n\nTotal "<<cut<<" Leap year";

}

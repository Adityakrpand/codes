#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    i=1;
    
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
        
            cout<<"_"<<" ";
            j=j+1;
        }
        k=1;
        while(k<=i)
        {

            cout<<"*"<<" ";
            k=k+1;
        }
        
        
        cout<<endl;
        i=i+1;


    }
}
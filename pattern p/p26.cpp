

// dabang pattern
#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    i=1;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<j;
            j=j+1;

        }
        int k=1;
        while(k<=n)
        {
        
            cout<<n-k+1;
            k=k+1;
        }
    i=i+1;
    cout<<endl;
    }
}
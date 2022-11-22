#include <iostream>
using namespace std;

int main()
{
    int i,n,ch,j;
    i=1;
    
    
    cin>>n;
        while (i<=n)
        {
            j=1;
            while (j<=n)
            {
            char ch= 'A'+j-1;
                cout<<ch ;
                j = j+1;

            }
            cout<<endl;
            i = i+1;

        }
    
}
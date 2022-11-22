// 5
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int i,n,j;
    i=1;
    
    cin>>n;
        while (i<=n)
        {
            j=1;
            while (j<=i)
            {
                cout<<i-j+1<<" ";
                
                j = j+1;

            }
            cout<<endl;
            i = i+1;
            
        

        }
    
}
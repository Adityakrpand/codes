// 1
// 12
// 123
// 1234
// 12345
// 123456
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
                cout<<j;
                j = j+1;

            }
            cout<<endl;
            i = i+1;
            
        

        }
    
}
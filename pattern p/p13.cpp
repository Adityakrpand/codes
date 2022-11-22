// E
// DE
// CDE
// BCDE
// ABCDE
#include <iostream>
using namespace std;

int main()
{
    int i,n,ch,j;
    i=1;
    
    
    cin>>n;
    
        while (i<=n)
        {
            char start ='A'+n-i;
            j=1;
            while (j<=i)
            {
                
                cout<<start;
                start=start+1;
                
                j = j+1;

            }
            cout<<endl;
            i = i+1;

        }
    
}
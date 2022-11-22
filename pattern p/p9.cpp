// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
#include <iostream>
using namespace std;

int main()
{
    int i,n,ch,j;
    i=1;
    
    char start='A';
    cin>>n;
        while (i<=n)
        {
            j=1;
            while (j<=n)
            {
            
            
                cout<<start ;
                start=start+1;
                j = j+1;

            }
            cout<<endl;
            i = i+1;

        }
    
}
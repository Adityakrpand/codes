// A
// BC
// DEF
// GHIJ
// KLMNO
// PQRSTU

#include <iostream>
using namespace std;

int main()
{
    int i,n,ch,j;
    i=1;
    
    
    cin>>n;
    char start ='A';
        while (i<=n)
        {
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
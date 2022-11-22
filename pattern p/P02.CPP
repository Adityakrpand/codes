// 1 2 3 
// 4 5 6
// 7 8 9
#include <iostream>
using namespace std;

int main()
{
    int i,n,count,j;
    i=1;
    count=1;
    cin>>n;
        while (i<=n)
        {
            j=1;
            while (j<=n)
            {
                cout<<count<<" ";
                count=count+1;
                j = j+1;

            }
            cout<<endl;
            i = i+1;
            
        

        }
    
}
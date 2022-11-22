//   1 1 1 1 1 
//     2 2 2 2 
//       3 3 3
//         4 4
//           5 
          
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
        while(j<=i)
        {
        
            cout<<" "<<" ";
            j=j+1;
        }
        k=1;
        int start=0;
        while(k<=n-i)
        {

            cout<<start+i<<" ";
            start=start+1;
            k=k+1;
        }
        
        
        cout<<endl;
        i=i+1;


    }
}
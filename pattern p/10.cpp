// 12345
// 23456
// 34567
// 45678
// 56789


// #include <iostream>
// using namespace std;

// int main()
// {
//     int i,n,ch,j;
//     i=1;
    
//     // char start='A';
//     cin>>n;
//         while (i<=n)
//         {
//             j=1;
//             while (j<=n)
//             {
//                 cout<<i+j-1 ;
//                 // start=start+1;
//                 j = j+1;

//             }
//             cout<<endl;
//             i = i+1;

        // }
    
// }

// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI
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
                char start='A'+i+j-2;
                cout<<start ;
                start=start+1;
                j = j+1;

            }
            cout<<endl;
            i = i+1;
        }
}
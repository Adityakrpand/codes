// AAAAAAA
// BBBBBBB
// CCCCCCC
// DDDDDDD
// EEEEEEE
// FFFFFFF
// GGGGGGG
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
            char ch= 'A'+i-1;
                cout<<ch ;
                j = j+1;

            }
            cout<<endl;
            i = i+1;

        }
    
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i,n,ch,j;
//     i=0;
//     char arr[3]={'A','B','C'};
    
//     // cin>>n;
//     // char a=97;
//     // cout<<a;
//         while (i<=3)
//         {
//             j=1;
//             while (j<=3)
//             char ch= 101 +i;
//             {
//                 cout<< arr[i] ;
//                 j = j+1;

//             }
//             cout<<endl;
//             i = i+1;

//         }
//     return 0;

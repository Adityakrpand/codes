//           1 
//         2 2 2
//       3 3 3 3 3
//     4 4 4 4 4 4 4
//   5 5 5 5 5 5 5 5 5
// 6 6 6 6 6 6 6 6 6 6 6
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j,k,n;
//     i=1;
    
//     cin>>n;
//     while(i<=n)
//     {
//         j=1;
//         while(j<=n-i)
//         {
        
//             cout<<" "<<" ";
//             j=j+1;
//         }
//         k=1;
//         while(k<=i)
//         {

//             cout<<i<<" ";
//             k=k+1;
//         }
//         int l=2;
//         while(l<=i)
//         {
//             cout<<i<<" ";
//             l=l+1;
//         }
        
        
//         cout<<endl;
//         i=i+1;


//     }
// }




//           1 1
//         1 2 2 1
//       1 2 3 3 2 1
//     1 2 3 4 4 3 2 1
//   1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 5 6 6 5 4 3 2 1
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j,k,n;
//     i=1;
    
//     cin>>n;
//     while(i<=n)
//     {
//         j=1;
//         while(j<=n-i)
//         {
        
//             cout<<" "<<" ";
//             j=j+1;
//         }
//         k=1;
//         int start=1;
//         while(k<=i)
//         {

//             cout<<start<<" ";
//             start=start+1;
//             k=k+1;
//         }
//         int l=1;
//         int st=i;
//         while(l<=i)
//         {
//             cout<<st<<" ";
//             st=st-1;
//             l=l+1;
//         }
        
        
//         cout<<endl;
//         i=i+1;


//     }
// }




//               1 
//             1 2 1
//           1 2 3 2 1
//         1 2 3 4 3 2 1 
//       1 2 3 4 5 4 3 2 1
//     1 2 3 4 5 6 5 4 3 2 1
//   1 2 3 4 5 6 7 6 5 4 3 2 1 
// 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1

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
        // 1st triangle
        while(j<=n-i)
        {
        
            cout<<" "<<" ";
            j=j+1;
        }
        k=1;
        int start=1;
        // 2nd triangle
        while(k<=i)
        {

            cout<<start<<" ";
            start=start+1;
            k=k+1;
        }
        int l=2;
        int st=i-1;
        if (i>=2)
        {
        // third triangle
            while(l<=i)
            {
            cout<<st<<" ";
            st=st-1;
            l=l+1;
            }
        }
        
        cout<<endl;
        i=i+1;


    }
}

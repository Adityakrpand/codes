// Lecture 5: Bitwise Operators, For Loops, Operator Precedence & Variable Scoping


#include<iostream>
using namespace std;
// bitwise operator
int main()
{
    // int a,b;
    // a=3;
    // b=5;
    // cout<<"a&b"<<(a&b)<<"="<<endl;
    // cout<<"a|b"<<(a|b)<<"="<<endl;
    // cout<<"~a"<<(~a)<<"="<<endl;
    // cout<<"a^b"<<(a^b)<<"="<<endl;

// left shift and right shift

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;


// pre increment and post increment
// pre dectrment and post decrement
// int i=7;
// cout<<i++<<endl;
// cout<<++i<<endl;
// cout<<i--<<endl;
// cout<<--i<<endl;


// for loop


// int i=1;
// int n;
// cout<<"enter the number:";
// cin>>n;
// for(i=1;i<=n;i++)
// {
//     cout<<i;
    
//     cout<<endl;
// }




    




//sum of counting no


// int sum=0;
// int n,j,i;
// j=0;
// cout<<"enter the number:";
// cin>>n;
// for(i=1;i<=n;i++)
// {
//     sum=j+i;
//     j=sum;
//     cout<<endl;
// }
// cout<<j;

    
// }


// sum of counting no

// int sum=0;
// int n,i;
// cout<<"enter the number:";
// cin>>n;
// for(i=1;i<=n;i++)
// {
//     sum=sum+1;
//     cout<<endl;
// }
// cout<<sum;

// fibonnai series

// int sum=0;
// int n,i,a,b;
// a=0;
// b=1;

// cout<<"enter the number:";
// cin>>n;
// cout<<a<<endl<<b<<endl;
// for(i=1;i<=n;i++)
// {
//     sum=a+b;
//     cout<<sum;
//     b=a+sum;
//     a=sum;
    
//     cout<<endl;
// }




// prime no(continue,break, bool)

int i,n;
cout<<"Enter the number"<<endl;
cin>>n;

bool isprime=true;
for(i=2;i<=n;i++)
{
    if (n%i==0)
    {
    isprime=false;
    }
}
if(n%i==0)
    cout<<"Given number is not prime"<<endl;
else
    cout<<"Given number is prime"<<endl;
}





// questions
// 1
// int i;
// for (i=0;i<=5;i--)
// {
//     cout<<i<<" ";
//     i++;


// 2
// int i,j;
// for(i=0;i<5;i++)
// {
//     for(j=i;j<=5;j++)
//     {
//         cout<<i<<" "<<j;
//     }
// }       

// variable and scopes


// operator and procedure

// use bracket
// q..subtract the product and sum of digits of given integers
// int n ;
// int product=1;
// int sum=0;
// cout<<"Enter the number:";
// cin>>n;
// while(n!=0)
// {
//     int rem=n%10;
//     product=product*rem;
    
//     sum=sum+rem;
//     n=n/10;


// }

// cout<<product<<endl;
// cout<<sum<<endl;

// int answer=product-sum;
// cout<<answer;






























}

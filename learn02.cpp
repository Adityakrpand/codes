#include <iostream>
#include <string>
using namespace std; 
 
 int main(){
    char n;
    cin>>n;
    if (isupper(n))
        cout<<"this is upercase:";
    else if (islower(n))
        cout<<"this is lowercase";
    else
        cout<<"this is numeric";


 }
 
 


#include <iostream>


using namespace std;


int main()

{
 
int a,b,c;
 
cout<<"Enter the value of a";
 
cin>>a;
 
b=a+1;
 
cout<<a<<"\n"<<b<<"\n";
 
for(int i=b;i<=20;i++)
 
{
    
    
c=a+b;
    
a=b;
    
b=c;
    
cout<<c<<"\n";
     
     
 
}

    
return 0;

}
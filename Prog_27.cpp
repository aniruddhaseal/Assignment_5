#include<iostream>
using namespace std;
int main(){
 //Taking Input and  Variable Declaration
 int n,s=0;
 cout<<"Enter the value of n";
 cin>>n;
 //Condition
 //Output
 for(int i=1;i<=n;i++)
 {
	s+=i;
 }
 cout<<s;
 return 0;
}

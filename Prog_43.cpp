#include<iostream>
using namespace std
int main(){
 //Taking Input and  Variable Declaration
 int n;
 cout<<"Enter a number";
 cin>>n;
 //Condition
 //Output
 cout<<"The factors of the number";
 for(int i=1;i<=n;i++)
 {
	if(n%i==0){
		cout<<i;
		}
 }
 return 0;
}
 

#include<iostream>
using namespace std
int main(){
 //Taking Input and  Variable Declaration
 int n;
 cout<<"Enter a number";
 cin>>n;
 //Condition
 int rev=0;
 while(n>0){
	int t=n%10;
	rev=rev+t*10;
	n=n/10;
	}
  //Output
 cout<<"The reverse is"<<rev<<endl;
return 0;
}

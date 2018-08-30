#include<iostream>
using namespace std;
int main(){
 //Taking Input and  Variable Declaration
 int a1,a2,a3;
 cout<<"Enter three numbers";
 cin>>a1>>a2>>a3;
 //Condition
 int max=a1;
 if(a2>max){
	max=a2;
	if(a3>max){
		max=a3;
		}
	}
 //Output
 cout<<"The maximum number is"<<max;
 return 0;
}
 

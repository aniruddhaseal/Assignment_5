#include<iostream>
using namespace std;
int main(){
 //Taking Input and  Variable Declaration
 char ch;
 cout<<"Enter a character";
 cin>>ch;
 int n=(int)ch;
 //Condition
 //Output
 if(n>=97 && n<=122){
	cout<<"Lower Case Character";
	}
	else if(n>=65 && n<=90){
		cout<<"Upper Case Character";
		}
 return 0;
}

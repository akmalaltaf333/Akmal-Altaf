#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter three number :";
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>=b&&a>c)
	cout<<"largest number is :"<<a<<endl;
	if(b>=a&&b>c)
	cout<<"largest number is :"<<b<<endl;
	if(c>=a&&c>b)
	cout<<"largest number is :"<<c<<endl;
	return 0;
	
}
	 


#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter your integer :";
	cin>>num;
	string result =(num % 2 == 0)?"even" : "odd";
	cout<< "The number is "<< num << result <<" : "<<endl;
	return 0;
}

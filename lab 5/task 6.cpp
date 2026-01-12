#include<iostream>
using namespace std;
int main(){
	int balance;
	int withdraw;
	cout<<"Enter your  balance:";
	cin>>balance;
	cout<<"Enter your withdraw";
		cin>>withdraw;
	if(withdraw <=balance){
		balance-=withdraw;
		cout<<"remain balance :$" <<balance<<endl;
		
		
	
	} else{
		cout<<"insufficient balnace:"<<endl;
		return 0;
		
	}
}

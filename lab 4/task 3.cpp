#include<iostream>
using namespace std;
int main(){
	int balance,loyal;
	cout<<"Enter account balance :";
	cin>>balance;
	cout<<"are you loyal customer(1 = yes, 0 = No):";
	cin>>loyal;
	string accounttype = (balance < 100)?"low balance account" :
		
		(balance <= 500)? "standard account" :
			"premium account";
			
	string offer = (balance >200 && loyal == 1)? "eligible for special offer"
	
	                :"not eligible for special offer";
					              
	cout<<"account type:"<<accounttype<<endl;
	
	cout<< "special offer status:"<<offer<<endl;
	
	return 0;						
	
}

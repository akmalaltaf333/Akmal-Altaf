#include <iostream>
using namespace std;
int main()
{
	string username;
	string password;
	cout<<" Enter name: ";
	cin>>username;
	cout<<" Enter password: ";
	cin>>password;
	
	string user="admin";
	string code="12345";
	
	if (( username==user && password==code)){
	cout<<" Access Granted.";}
	else if((username==user && password!=code)){
	cout<<" Wrong Password.";}
	else{
	cout<<" User Not Found.";}
	
	return 0;
}

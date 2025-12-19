#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter age : ";
	cin>> age;
	string category = (age < 13 ) ? "child":
	(age <= 19) ?"teenager" :
	"Adult"; 
	cout << "Age" << age << " falls under the category :"<<category<<endl;
	return 0;
	
}

   #include<iostream>
using namespace std;
int main(){
	int salary,exprience;
	cout<<"Enter your salary";
	cin>>salary;
	cout<<"Enter your year of exprience";
	cin>>exprience;
	if(salary>25000 ){
		cout<<"eligible for loan";
	}else if(salary >=20000 && exprience >= 5){
			cout<<"eligible for loan based on the exprience :"<<endl;
		}
	else {
		cout<<"not for eligible for loan";
	} 
	return 0;
}
	


#include<iostream>
using namespace std;
int main(){
	char grade;
	int year;
	double basic ,salary, bouns,gross,tax=0,net;
	cout<<"Enter employee grade(A,B,C) :";
	cin>>grade;
	cout<<"enter year of service :";
	cin>>year;
	//basic salary
	if(grade=='A')
	salary =50000;
	if(grade=='B')
	salary=30000;
	if(grade=='C')
	salary=20000;
	//bouns salary
	if(year>=10)
	bouns=0.10*salary;
	if(year>=5&&year<=9)
	bouns=0.05*salary;
	if(year<5)
	bouns=0;
	//gross salary
	gross=salary+bouns;
	//tax
	if(gross>40000)
	tax=0.20*gross;
	if(gross>=30000&&gross<=40000)
	tax=0.10*gross;
	if(gross<30000)
	tax=0;
	//net salary
	net=gross-tax;
	cout<<"basic salary:"<<salary<<endl;
	cout<<"bouns:"<<bouns<<endl;
	cout<<"gross salary:"<<gross<<endl;
	cout<<"net salary :"<<net<<endl;
	return 0;
	
	
	
}

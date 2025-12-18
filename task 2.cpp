#include<iostream>
using namespace std;
int main(){
	const float tax=0.06;
	float item1=12.95;
	float item2=24.95;
	float item3=6.95;
	float item4=14.95;
	float item5=3.95;
	
	cout<<"item1:$"<<item1<<endl;
	cout<<"item2:$"<<item2<<endl;
	cout<<"item3:$"<<item3<<endl;
	cout<<"item4:$"<<item4<<endl;
	cout<<"item5:$"<<item5<<endl;
	
	float subtotal=item1+item2+item3+item4+item5;
	float saletax=subtotal*tax;
	float total=subtotal+saletax;
	
	cout<<"subtotal=$"<<subtotal<<endl;
	cout<<"saletax(6%)=$"<<saletax<<endl;
	cout<<"total=$"<<total<<endl;
	return 0;
}

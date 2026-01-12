#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter your marks out of 100 :";
	cin>>marks;
	if(marks>=90) {
	cout<<"yuor grade is A+"<<endl;
}

	if(marks>=80 && marks <90) {
	
		cout<<"your grade is A"<<endl;
}
		if(marks>=70 && marks <80) {
		cout<<"your grade is B"<<endl;
}
	if(marks>=60 && marks <70) {
	
		cout<<"your grade is C"<<endl;
}
	if(marks<60) {
	
		cout<<"your grade is false"<<endl;
}
	return 0;
}

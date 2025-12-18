#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float score1,score2,score3,average;
	score1=88.2;
	score2=90.75;
	score3=85.25;
	cout<<fixed<<setprecision(2);
	average=(score1+score2+score3)/3;
	cout<<"the average of 88.5,90.75 and 88.5 is ="<<average;
	return 0;
	
}

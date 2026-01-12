#include <iostream>
using namespace std;
int main ()
{
	int temp;
	cout<<" Enter the temperature: ";
	cin>>temp;
	if (temp>=40){ 
	cout<<" Stay indoor because it is extremely hot and could be dangerous to health ";}
	else if (temp>=30 && temp<=39){
	cout<<" Drink plenty of water to stay hydrated in the hot weather ";}
	else if (temp>=20 && temp<=29){
	cout<<"The weather is pleasent and suitable for outdoor activities ";}
	else { 
	cout<<" Wearning warm clothes to stay comfortable in the weather ";
	
	}
	
	
	
	
	return 0;
}
	


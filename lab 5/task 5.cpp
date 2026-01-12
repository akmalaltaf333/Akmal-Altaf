#include<iostream>
using namespace std;
int main(){
  char c ;
	cout<<"Enter the colour:";
	cin>>c;
	if(c== 'R'||c=='r')
	cout<<"stop"<<endl;
	if(c=='G'|| c=='g')
	cout<<"go"<<endl;
	if(c=='Y'|| c=='y')
	cout<<"slow down"<<endl;
	return 0;
}

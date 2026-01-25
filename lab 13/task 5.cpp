#include<iostream>
using namespace std;
int main(){
	int nullptr;
 int ptr = nullptr;
	
	if(ptr == nullptr){
		cout<<"Pointer is null .It does not point to valid memory."<<endl;
	}else {
		cout <<"Address:"<<ptr<<endl;
	}
	return 0;
}

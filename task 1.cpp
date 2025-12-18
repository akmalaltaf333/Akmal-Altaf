#include<iostream>
using namespace std;
int main(){
	int x1,x2,y1,y2;
	x1=3; 
	x2=6;
	y1=4;
	y2=8;
	int squared_distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	cout<<"the squared distance between the point (3,4)and(6,8)is:"<<squared_distance<<endl;
	return 0;
}

#include <iostream>
using namespace std;

class change {
	public:
	int a;	
};
void swap(int &x,int &y) {
		int temp=x;
		x=y;
		y=temp;
	}

int main() {
	change obj1,obj2;
	cout<<"enter the two numbers:";
	cin>>obj1.a>>obj2.a;
	swap(obj1.a,obj2.a);
	cout<<"the numbers after swap are "<<obj1.a<<" and "<<obj2.a;
}	

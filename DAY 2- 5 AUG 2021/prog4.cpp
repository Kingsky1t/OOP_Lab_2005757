#include <iostream>
using namespace std;

class complex{
	int real;
	int img;
	
	public:
	void input() {
		cout<<"enter the complex number:";
		cin>>real>>img;
	}
	
	void output() {
		cout<<"\nthe complex number is "<<real<<"+i"<<img;
	}
};

int main() {
	complex arr[10];
	for(int i=0;i<10;i++) {
		arr[i].input();
	}
	for(int i=0;i<10;i++) {
		arr[i].output();
	}
	return 0;
}

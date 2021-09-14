#include <iostream>
using namespace std;

class Complex {
	int real;
	int img;
	public:
	Complex() {
		real=0;
		img=0;
	}
	Complex(int a,int b) {
		real=a;
		img=b;
	}
	Complex(Complex &a) {
		real=a.real;
		img=a.img;
	}
	~Complex() {
		cout<<"destructor called"<<endl;
	}
	void input() {
		cout<<"enter the real and imaginary part:";
		cin>>real>>img;
	}
	void display() {
		cout<<"the complex no. is "<<real<<"+i"<<img<<endl;
	}
};
	

int main() {
	Complex c1;
	c1.display();
	Complex c2(3,4);
	c2.display();
	Complex c3=c2;
	c3.display();
}

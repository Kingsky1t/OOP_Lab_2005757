#include <iostream>
using namespace std;
class test2;
class test1 {
	public:
	int x;
	
	void input() {
		cout<<"enter the value for first class:";
		cin>>x;
	}
	
	void display() {
		cout<<"value of first class is "<<x<<endl;
	}
	friend void swap(test1 &,test2 &);
};
class test2 {
	public:
	int x;
	
	void input() {
		cout<<"enter the value for second class:";
		cin>>x;
	}
	
	void display() {
		cout<<"value of second class is "<<x;
	}
	friend void swap(test1 &,test2 &);
};
void swap(test1 &t1,test2 &t2) {
	int temp=t1.x;
	t1.x=t2.x;
	t2.x=temp;
}
int main() {
	test1 T1;	
	T1.input();
	test2 T2;
	T2.input();
	swap(T1,T2);
	T1.display();
	T2.display();
	return 0;
}

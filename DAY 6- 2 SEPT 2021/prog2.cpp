#include <iostream>
using namespace std;

class Time {
	int hh;
	int mm;
	public:
	Time() {
		hh=0;
		mm=0;
	}
	Time(int h,int m=0) {
		hh=h;
		mm=m;
	}
	Time(Time &a) {
		hh=a.hh;
		mm=a.mm;
	}
	~Time() {
		cout<<"destructor called"<<endl;
	}
	void input() {
		cout<<"enter the time in mins and sec:";
		cin>>hh>>mm;
	}
	void display() {
		cout<<"the time is "<<hh<<" hours and "<<mm<<" minutes"<<endl;
	}
};

int main() {
	char ch;
	Time t1;
	t1.display();
	cout<<"do you want to enter minutes? y or n:";
	cin>>ch;
	if(ch=='y') {
		t1.input();
		Time t3=t1;
		t3.display();
	}
	else {
		int min;
		cout<<"enter hours:";
		cin>> min;
		Time t2(min);
		Time t3=t2;
		t3.display();
	}
	
	
}

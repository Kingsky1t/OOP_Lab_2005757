#include <iostream>
using namespace std;

void swap(int &x,int &y) {
	int temp=x;
	x=y;
	y=temp;
}

int main() {
	int fnum,lnum;
	cout<<"enter the two numbers:";
	cin>>fnum>>lnum;
	swap(fnum,lnum);
	cout<<"the numbers after swap are "<<fnum<<" and "<<lnum;
}

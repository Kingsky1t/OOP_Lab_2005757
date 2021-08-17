#include <iostream>
using namespace std;
#define pi 3.14

float vol(float r) {
	return (4*pi*r*r)/3;
}

float vol(int r,int h) {
	return pi*r*r*h;
}

int vol(int s) {
	return s*s*s;
}

int main() {
	int rd,ht,s;
	float r;
	cout<<"enter the radius of circle:";
	cin>>r;
	cout<<"enter radius and height of cylinder:";
	cin>>rd>>ht;
	cout<<"enter the side of cuboid:";
	cin>>s;
	cout<<"volume of circle:"<<vol(r)<<endl;
	cout<<"volume of cylinder:"<<vol(rd,ht)<<endl;
	cout<<"volume of cuboid:"<<vol(s)<<endl;
}

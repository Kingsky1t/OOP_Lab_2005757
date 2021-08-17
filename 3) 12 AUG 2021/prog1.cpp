#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.14

float area(float r) {
	return pi*r*r;
}

int area(int b,int h) {
	return b*h;
}

float area(int a,int b,int c) {
	float s=(a+b+c)/2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {
	int br,ht,a,b,c;
	float r;
	cout<<"enter the radius of circle:";
	cin>>r;
	cout<<"enter breadth and height of rectangle:";
	cin>>br>>ht;
	cout<<"enter the three sides of triangle:";
	cin>>a>>b>>c;
	cout<<"area of circle:"<<area(r)<<endl;
	cout<<"area of rectangle:"<<area(br,ht)<<endl;
	cout<<"area of triangle:"<<area(a,b,c)<<endl;
}

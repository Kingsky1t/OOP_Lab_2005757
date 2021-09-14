#include <iostream>
#include <cmath>
using namespace std;

class Point {
	public:
	int x;
	int y;
	
	void input() {
		cout<<"enter the x coordinate:";
		cin>>x;
		cout<<"enter the y coordinate:";
		cin>>y;
	}
	
	void dist(Point a) {
		int m=abs(x-a.x);
		int n=abs(y-a.y);
		double dis= m*m+n*n;
		dis=sqrt(dis);
		cout<<"the distance between the points is "<<dis;
	}
};

int main() {
	Point a,b;
	a.input();
	b.input();
	a.dist(b);
	return 0;
}
	

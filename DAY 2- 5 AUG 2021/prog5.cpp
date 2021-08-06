#include <iostream>
using namespace std;

class Distance{
	public:
	int ft;
	int in;
	
	void input() {
		cout<<"enter the distance in ft and inches:";
		cin>>ft>>in;
	}
	
	void add(Distance a,Distance b) {
		ft=a.ft+b.ft;
		in=a.in+b.in;
		if(in>=12) {
			ft++;
			in-=12;
		}
	}
	
	Distance add(Distance a) {
		Distance m;
		m.ft=ft+a.ft;
		m.in=in+a.in;
		if(m.in>=12) {
			m.ft++;
			m.in-=12;
		}
		return m;
	}
	
	void display() {
		cout<<"the addition of distances is "<<ft<<" ft and "<<in<<" inches";
	}
};

int main() {
	Distance c1,c2,c3;
	c1.input();
	c2.input();
	c3.add(c1,c2);
	c3.display();
	cout<<"\n";
	Distance d1,d2,d3;
	d1.input();
	d2.input();
	d3=d1.add(d2);
	d3.display();
	
	return 0;
	
	
}

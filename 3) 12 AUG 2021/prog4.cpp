#include <iostream>
using namespace std;

inline int square(int n) {
	return n*n;
}

inline int cube(int n) {
	return n*n*n;
}

int main() {
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	cout<<"square="<<square(n)<<endl;
	cout<<"cube="<<cube(n)<<endl;
}

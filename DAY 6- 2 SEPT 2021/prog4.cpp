#include <iostream>
using namespace std;

class test {
	public:
	test() {
		cout<<"constructor initialized"<<endl;
	}
	~test() {
		cout<<"destructor initialized"<<endl;
	}
};
int main() {
	cout<<"object one:"<<endl;
	test ob1;
	cout<<"object two:"<<endl;
	test ob2;
	return 0;
}
	
	

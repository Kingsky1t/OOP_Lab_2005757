#include <iostream>
using namespace std;

class student{
	char name[100];
	int roll;
	int tot;
	
	public:
	void input() {
		cout<<"enter the details of the student\n";
		cout<<"enter name:";
		cin>>name;
		cout<<"enter roll no.:";
		cin>>roll;
		cout<<"enter total marks:";
		cin>>tot;
	}
	
	void display() {
		cout<<name<<" has roll number "<<roll<<" and total marks "<<tot;
	}
};

int main() {
	student s;
	s.input();
	s.display();
	return 0;
}

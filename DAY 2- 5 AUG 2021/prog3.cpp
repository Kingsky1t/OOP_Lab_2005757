#include <iostream>
using namespace std;

class student{
	char name[100];
	int roll;
	int marks[5];
	int tot=0;
	int per=0;
	
	public:
	void input() {
		cout<<"enter the details of the student\n";
		cout<<"enter name:";
		cin>>name;
		cout<<"enter roll no.:";
		cin>>roll;
		cout<<"enter marks in 5 subjects:";
		for(int i=0;i<5;i++) {
			cin>>marks[i];
		}
	}
	
	void calc() {
		for(int i=0;i<5;i++) {
			tot+=marks[i];
		}
		per=tot/5;
	}
	
	void display() {
		cout<<name<<" has roll number "<<roll<<" and total marks "<<tot<<" and "<<per<<"%";
	}
};

int main() {
	student s;
	s.input();
	s.calc();
	s.display();
	return 0;
}


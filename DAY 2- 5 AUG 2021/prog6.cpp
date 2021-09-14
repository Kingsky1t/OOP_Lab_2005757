#include <iostream>
using namespace std;

class employee {
	char id[20];
	char name[100];
	int age;
	int bas_sal;
	int grs_sal;
	public:
	void input() {
		cout<<"enter id:";
		cin>>id;
		cout<<"enter name:";
		cin>>name;
		cout<<"enter age:";
		cin>>age;
		cout<<"enter basic salary:";
		cin>>bas_sal;
	}

	void cal() {
		grs_sal=bas_sal+0.8*bas_sal+0.1*bas_sal;
	}
	
	void output() {
		cout<<id<<"\t"<<name<<"\t"<<age<<"\t"<<bas_sal<<"\t"<<grs_sal<<"\n";
	}
};

int main() {
	int n;
	cout<<"enter the number of employees:";
	cin>>n;
	employee arr[n];
	for(int i=0;i<n;i++) {
		arr[i].input();
		arr[i].cal();
	}
	cout<<"in tabular form:\n";
	cout<<"id\tname\tage\tbasic salary\tgross salary\n";
	for(int i=0;i<n;i++) {
		arr[i].output();
	}
	return 0;
}
	
	
	
	

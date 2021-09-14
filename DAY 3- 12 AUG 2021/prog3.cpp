#include <iostream>
using namespace std;

void display(char c='*',int n=80) {
	for(int i=1;i<n;i++) {
		cout<<c;
	}
}

int main() {
	cout<<"enter 1 for entering character and number"<<endl;
	cout<<"enter 2 for entering character "<<endl;
	cout<<"enter 3 for entering nothing"<<endl;
	int ch,n;
	char c;
	cin>>ch;
	switch(ch){
		case 1:cout<<"enter character and number:";
		cin>>c>>n;
		display(c,n);
		break;
		case 2:cout<<"enter character:";
		cin>>c;
		display(c);
		break;
		case 3:display();
		break;
		default:cout<<"wrong choice";
	}
}


		
	

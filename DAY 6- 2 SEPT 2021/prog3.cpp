#include <iostream>
#include <string.h>
using namespace std;

class String {
	int len;
	char *str;
	public: 
	String() {
		str=new char[100];
		len=0;
	}
	
	String(char s[100],int l) {
		str=s;
		len=l;
	}
	
	void input() {
		cout<<"enter a string:";
		cin.getline(str,100);
	}
		
	void concatenate(String a,String b) {
		len=a.len+b.len;
		str=strcat(a.str,b.str);
	}
	
	void display() {
		cout<<str;
	}
	
	~String() {
	}
};

int main() {
	String s1;
	s1.input();
	char ch[100];
	cout<<"enter a string:";
	cin.getline(ch,100);
	String s2(ch,5);
	String s3;
	s3.concatenate(s1,s2);
	s3.display();
	return 0;
}

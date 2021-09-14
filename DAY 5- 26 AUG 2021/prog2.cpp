#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1,s2;
	cout<<"enter the string:";
	getline(cin,s1);
	int count=s1.length();
	s2.resize(count);
	for(int i=0;i<count;i++) {
		if(s1.at(i)!=' ')
			s2.at(i)=s1.at(i);
		}
	delete s1;
	cout<<"the new string after removing spaces is:";
	cout<<s2;
}

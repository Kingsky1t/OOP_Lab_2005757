#include <iostream>
using namespace std;

int main() {
	int n1,n2;
	cout<<"enter the number of elements in first array:";
	cin>>n1;
	int *p=new int[n1];
	cout<<"enter the elements:";
	for(int i=0;i<n1;i++) {
		cin>>*(p+i);
	}
	cout<<"enter the number of elements in second array:";
	cin>>n2;
	int *q=new int[n2];
	cout<<"enter the elements:";
	for(int i=0;i<n2;i++) {
		cin>>*(q+i);
	}
	int *r=new int[n1+n2];
	int i;
	for(i=0;i<n1;i++) {
		*(r+i)=*(p+i);
	}
	for(int x=0;x<n2;x++) {
		*(r+i)=*(q+x);
		i++;
	}
	delete[] p;
	delete[] q;
	cout<<"the new array is:";
	for(int x=0;x<n1+n2;x++) {
		cout<<*(r+x)<<" ";
	}
	return 0;
}
	
	

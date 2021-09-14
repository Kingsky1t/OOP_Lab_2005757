#include <iostream>
using namespace std;

int main() {
	struct node {
		int info;
		struct node *next;
	};
	struct node *start=new struct node();
	start=NULL;
	char ch;
	do{
		int x;
		cout<<"enter a number:";
		cin>>x;
		struct node *first=new struct node();
		first->info=x;
		first->next=NULL;
		if(start==NULL) {
			start=first;
		}
		else{
			struct node *ptr=start;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=first;
		}
		cout<<"Do you want to enter another number? y or n:";
		cin>>ch;
	}while(ch=='y');
	struct node *ptr=start;
	cout<<"the intergers entered are:";
	while(ptr!=NULL) {
		cout<<ptr->info<<" ";
		ptr=ptr->next;
	}
}
			
			
	

/* WAP to input name, roll number and marks in 5 subjects for n number of students. 
 * Write functions to:-
    a. Find total marks and percentage of all n students.
    b. Display details of a student with a given roll number.
    c. Display the details for all the students having percentage in a given range.
    d. Sort the array in ascending order of marks.*/
#include <stdio.h>

/* global variables for ease */

int n;
int tot[100],per[100];
struct student {
		char name[100];
		int roll;
		int sub[5];
	}arr[100];

/* for calculating total marks and percentages of each student */

void total_marks() {
	printf("total marks and percentages are:\n");
	for(int i=0;i<n;i++) {
		for(int j=0;j<5;j++) {
			tot[i]+=arr[i].sub[j];
		}
		per[i]=tot[i]/5;
	}
	for(int i=0;i<n;i++) {
		printf("student %d--> %d %d%%\n",i+1,tot[i],per[i]);
	}
}

/* for printing details of students whose percentage lies within a range */

void percentage_detail() {
	int a,b,flag=0;
	printf("enter the range:");
	scanf("%d%d",&a,&b);
	for(int i=0;i<n;i++) {
		if(per[i]>=a && per[i]<=b) {
			flag=1;
			printf("%s has a roll no %d with subject marks %d %d %d %d %d\n",arr[i].name,arr[i].roll,arr[i].sub[0],arr[i].sub[1],arr[i].sub[2],arr[i].sub[3],arr[i].sub[4]);
		}
	}
	if(flag==0){
		printf("no students\n");
	}
}

/* for printing the details of a student whose roll is inputed */

void print_detail() {
	int x,flag=0;
	printf("enter the roll no:");
	scanf("%d",&x);
	for(int i=0;i<n;i++) {
		if(x==arr[i].roll) {
			flag=1;
			printf("%s has a roll no %d with subject marks %d %d %d %d %d\n",arr[i].name,arr[i].roll,arr[i].sub[0],arr[i].sub[1],arr[i].sub[2],arr[i].sub[3],arr[i].sub[4]);
		}
	}
	if(flag==0){
		printf("no students\n");
	}
}

/* sorting of total marks array */

void rearrange() {
	for(int i=0;i<n-1;i++) {
		for(int j=0;j<n-i-1;j++) {
			if(tot[j]<tot[j+1]) {
				int temp=tot[j];
				tot[j]=tot[j+1];
				tot[j+1]=temp;
			}
		}
	}
	printf("\nsorted array:");
	for(int i=0;i<n;i++) {
			printf("%d ",tot[i]);
	}
}
		
int main() {
	printf("enter the value of students:");
	scanf("%d",&n);
	for(int j=0;j<n;j++) {
		printf("enter the name:");
		scanf("%s",arr[j].name);
		printf("enter the roll:");
		scanf("%d",&arr[j].roll);
		printf("enter the marks in 5 subjects:");
		for(int i=0;i<5;i++) {
			scanf("%d",&arr[j].sub[i]);
		}
	}
	total_marks();
	print_detail();
	percentage_detail();
	rearrange();
	return 0;
}
	

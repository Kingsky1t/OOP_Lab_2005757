/*WAP to input name, roll number and marks in 5 subjects for a student, 
 * and display it.*/
#include <stdio.h>

int main() {
	struct student {
		char name[100];
		int roll;
		int sub[5];
	}s1;
	
	/* inputs */
	
	printf("enter the name:");
	scanf("%s",s1.name);
	printf("enter the roll:");
	scanf("%d",&s1.roll);
	printf("enter the marks in 5 subjects:");
	for(int i=0;i<5;i++) {
		scanf("%d",&s1.sub[i]);
	}
	
	/* outputs */
	
	printf("the name is %s\n",s1.name);
	printf("the roll no. is %d\n",s1.roll);
	printf("the marks in 5 subjects are %d %d %d %d %d\n",s1.sub[0],s1.sub[1],s1.sub[2],s1.sub[3],s1.sub[4]);
	return 0;
}

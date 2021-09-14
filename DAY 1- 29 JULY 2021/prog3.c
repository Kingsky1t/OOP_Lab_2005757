/* WAP to enter id, name, age and basic salary of n number of employees.
 * Calculate the gross salary of all the employees and display it along 
 * with all other details in a tabular form,using pointer to structure.
	[ Gross sa lary= Basic salary + DA + HRA, 
	  DA = 80% of Basic salary 
	  HRA=10% of Basic salary ]*/
#include <stdio.h>

int main() {
	int n;
	printf("enter the number of employees:");
	scanf("%d",&n);
	struct employee{
		char id[100];
		char name[100];
		int age;
		double bas_sal;
		double grs_sal;
	}arr[n];
	struct employee *p=arr;
	
	/* input */
	
	for(int i=0;i<n;i++) {
		printf("enter data of employee no:%d\n",i+1);
		printf("enter the id:");
		scanf("%s",p->id);
		printf("enter the name:");
		scanf("%s",p->name);
		printf("enter the age:");
		scanf("%d",&(p->age));
		printf("enter the basic salary:");
		scanf("%lf",&(p->bas_sal));
		p->grs_sal=p->bas_sal+(0.8*p->bas_sal)+(0.1*p->bas_sal);
		p++;
	}
	
	/* outputs */
	
	p=arr;
	printf("IDs\tNAME\tAGE\tBASIC SALARY\tGROSS SALARY\n");	
	for(int i=0;i<n;i++) {
		printf("%s\t",p->id);
		printf("%s\t",p->name);
		printf("%d\t",p->age);
		printf("%lf\t",p->bas_sal);
		printf("%lf\n",p->grs_sal);
		p++;
	}	
	return 0;
}

// Program using pointer to structure to initialize the members in a structure / one student
#include <stdio.h>

struct student
{
	int s_no;
	float fees;
};

int main(int argc, char**argv) 
{
	struct student *p;
	struct student stud1 ={1, 800};
	
	p = &stud1;
	
	printf("\nDetails of first student:");
	printf("\n--------------------------------------");
//	printf("\n Student Number= %d\n", stud1.s_no);     // Previously

	printf("\n Student Number= %d\n", p->s_no);     // Now with the use of -> operator
	
	printf("\n Fees = %f", p->fees);
}

// Program using structures to read and display the information about a student.

#include <stdio.h>
int main(int argc, char** argv)
{
	struct student  
	{
	int s_no;
	char name[80];
	float fees;
	};                    // Do not miss the ;
struct student stud1;

	printf("\n Enter the student number : ");
	scanf("%d", &stud1.s_no);
	printf("\n Enter the name : ");
	scanf("%s", stud1.name); // no & is used
	printf("\n Enter the fees : ");
	scanf("%f", &stud1.fees);
	
	printf("\n ********STUDENT'S DETAILS *******");
	printf("\n STUDENT No. = %d", stud1.s_no);
	printf("\n NAME = %s", stud1.name);
	printf("\n FEES = %f", stud1.fees);

}

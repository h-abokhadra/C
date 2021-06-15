// Program to read and display the information of a student using a "nested structure"
#include <stdio.h>
int main(int argc, char** argv)
{
	struct DOB
	{
	int day;
	int month;
	int year;
	};
	struct student
	{
	int s_no;
	char name[50];
	float fees;
	struct DOB date;
	};
struct student stud1;

	printf("\n Enter the student number : ");
	scanf("%d", &stud1.s_no);
	printf("\n Enter the name : ");
	scanf("%s", stud1.name);
	printf("\n Enter the fees : ");
	scanf("%f", &stud1.fees);
	printf("\n Enter the DOB : ");
	scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);

	printf("\n ********STUDENT'S DETAILS *******");
	printf("\n STU No. = %d", stud1.s_no);
	printf("\n NAME = %s", stud1.name);
	printf("\n FEES = %f", stud1.fees);
	printf("\n DOB = %d - %d - %d", stud1.date.day, stud1.date.month, stud1.date.year);

return 0;
}

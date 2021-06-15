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
	struct NAME
	{
	char first_name[20];
	char mid_name[20];
	char last_name[20];
	};
	
	struct student
	{
	int s_no;
	struct NAME name;
	float fees;
	struct DOB date;
	};
struct student stud1;

	printf("\n Enter the student number : ");
	scanf("%d", &stud1.s_no);
	printf("\n Enter the NAME : ");
	scanf("%s %s %s", stud1.name.first_name, stud1.name.mid_name,stud1.name.last_name);
	printf("\n Enter the fees $ : ");
	scanf("%f", &stud1.fees);
	printf("\n Enter the DOB : ");
	scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);

	printf("\n ********STUDENT'S DETAILS *******");
	printf("\n STU No. = %d", stud1.s_no);
	printf("\n NAME = %s %s %s", stud1.name.first_name,stud1.name.mid_name,stud1.name.last_name);
	printf("\n FEES $ = %f", stud1.fees);
	printf("\n DOB = %d - %d - %d", stud1.date.day, stud1.date.month, stud1.date.year);

}

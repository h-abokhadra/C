// Program using structures to read and display the information about 5 students.

#include <stdio.h>
int main(int argc, char** argv)
{
	struct student 
	{
	int s_no;
	char name[20];
	float fees;
	}stud1, stud2,stud3,stud4,stud5;                    
 //struct student stud1;

	printf("\n Enter the student number : ");
	scanf("%d %d %d %d %d", &stud1.s_no, &stud2.s_no,&stud3.s_no,&stud4.s_no,&stud5.s_no);
	printf("\n Enter the name : ");
	scanf("%s %s %s %s %s", stud1.name, stud2.name,stud3.name,stud4.name,stud5.name);
	printf("\n Enter the fees : ");
	scanf("%f %f %f %f %f", &stud1.fees,&stud2.fees,&stud3.fees,&stud4.fees,&stud5.fees);
	
	printf("\n ********STUDENT'S DETAILS *******");
	printf("\n STUDENT NUM. = %d", stud1.s_no);
	printf("\n NAME = %s", stud1.name);
	printf("\n FEES = %f", stud1.fees);
	printf("\n STUDENT NUM. = %d", stud2.s_no);
	printf("\n NAME = %s", stud2.name);
	printf("\n FEES = %f", stud2.fees);
	printf("\n STUDENT NUM. = %d", stud3.s_no);
	printf("\n NAME = %s", stud3.name);
	printf("\n FEES = %f", stud3.fees);
	printf("\n STUDENT NUM. = %d", stud4.s_no);
	printf("\n NAME = %s", stud4.name);
	printf("\n FEES = %f", stud4.fees);
	printf("\n STUDENT NUM. = %d", stud5.s_no);
	printf("\n NAME = %s", stud5.name);
	printf("\n FEES = %f", stud5.fees);
	return 0;
}

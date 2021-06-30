//This program is for adding 2 different distances using the inch and foot measurment systems
//It also provide a conversion steps from inches to foot if the user inputs for inches is greater than 12
//Author: Hoda Abokhadra, June 2021

#include <stdio.h>

struct DISTANCE { //declaring the Struct with it's members 
	int feet;
	float inch;
} dist1, dist2, Result;

int main() {

	printf("Enter 1st distance: "); //Prompting the user to enter the 1st distance in feet and inch
	
	printf("\nEnter feet: "); 
	scanf("%d", &dist1.feet); //Storing the feet value the user is entering in dist1 
	
	printf("Enter inch: ");
	scanf("%f", &dist1.inch); //Storing the inch value the user is entering in dist1 


	printf("\nEnter 2nd distance: "); //Prompting the user to enter the 2nd distance in feet and inch
	
	printf("\nEnter feet: ");
	scanf("%d", &dist2.feet); //Storing the feet value the user is entering in dist2
	
	printf("Enter inch: ");
	scanf("%f", &dist2.inch); //Storing the inch value the user is entering in dist2


	Result.feet = dist1.feet + dist2.feet; //adding the feet values and storing their result in Result.feet
	Result.inch = dist1.inch + dist2.inch; //adding the inch values and storing their result in Result.inch


	while (Result.inch >= 12.0) { //while loop for checking if the inch result is greater than or equal 12.0 to convert it to 1 foot
	Result.inch = Result.inch - 12.0; //subtract 12.0 to convert the 12 inches to 1 foot in the next step
	++Result.feet; //incrementing the feet because we subtracted 12 inches and converted them to 1 foot
	}
	
	printf("\nSum of distances - %d\'-%.1f\"", Result.feet, Result.inch); //Displaying the results to the user
	
	return 0; //Exiting the program
}

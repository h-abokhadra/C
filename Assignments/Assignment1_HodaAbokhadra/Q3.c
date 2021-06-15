//This program is for to enter a number from 1-7 and display the corresponding day of the 
//week using switch case statement
//Author: Hoda Abokhadra, May 28th, 2021

#include <stdio.h>

int main(int argc, char** argv)
{
	
	printf("This program is for to enter a number from 1-7 and display the corresponding day of the week using switch case statement");
    int dayNumber; //declaring the variable
    
    printf("\nEnter a day number(1-7): ");
    scanf("%d", & dayNumber); //getting the user inputs the dayNumber
    
    switch(dayNumber) //Switch statement to include all the number of the days from 1 - 7
    {
        case 1: 
            printf("SuNdAy");
            break;
        case 2: 
            printf("MoNdAy");
            break;
        case 3: 
            printf("TuEsDaY");
            break;
        case 4: 
            printf("wEdNeSdAy");
            break;
        case 5: 
            printf("ThUrSdAy");
            break;
        case 6: 
            printf("FrIdAy");
            break;
        case 7: 
            printf("SaTuRdAy");
            break;
            
        default: // to notify the user that he\she should use any number between 1 and 7
        
        printf("Invalid input! Please enter a number between 1-7.");
    }

    return 0;
}

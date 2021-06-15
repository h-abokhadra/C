//This program is for displaying a grocery bill for Freshco
//Author: Hoda Abokhadra, May 30th, 2021

#include<stdio.h>

int main(int argc, char** argv)
{
	//declaring the variables
	
	int total; 
	int CocaCola=1;
	int HungryMan=2;
	int JanesWings=5;
	int MaxwellHouse=3;
	int a,b,c,d;  //Variables for storing the Quantity
	int h,i,j,k;  //Variables for storing the Amount
	
	//Printing the Items to the user
	
	printf("\nThis program is for displaying a grocery bill for Freshco\n");
	printf("\nWELCOME TO FRESCHO!");
	printf("\n============================================================");
	printf("\nItem Name \t\t\t Cost Per Unit");
	printf("\n------------------------------------------------------------");
	printf("\nCoca Cola \t\t\t $1");
	printf("\n------------------------------------------------------------");
	printf("\nHungry Man \t\t\t $2");
	printf("\n------------------------------------------------------------");
	printf("\nJanes Wings \t\t\t $5");
	printf("\n------------------------------------------------------------");
	printf("\nMaxwell House \t\t\t $3");
	printf("\n============================================================\n");
	
	//taking the user inputs

	printf("\nEnter the quantity of Coca Cola purchased: ");
	scanf("%d",&a);
	h = a * CocaCola; //Calculating the amount
	printf("\nEnter the quantity of Hungry Man purchased: ");
	scanf("%d",&b);
	i = b * HungryMan; //Calculating the amount
	printf("\nEnter the quantity of Janes Wings purchased: ");
	scanf("%d",&c);
	j = c * JanesWings; //Calculating the amount
	printf("\nEnter the quantity of Maxwell House purchased: ");
	scanf("%d",&d);
	k = d * MaxwellHouse; //Calculating the amount
	total = h + i + j + k; //Calculating the total
	
	//printing the output grocery bill
	
	printf("\n# # # # # # # # # # # # FRESH CO BILL # # # # # # # # # # # #\n");
	printf("\n\tItem\t  Quantity   Price   Amount\n");
	printf("\n------------------------------------------------------------\n");
	printf("\n\tCoca Cola\t%d\t%d\t%d ", a, CocaCola, h);
	printf("\n\tHungry Man\t%d\t%d\t%d ", b, HungryMan, i);
	printf("\n\tJanes Wings\t%d\t%d\t%d ", c, JanesWings, j);
	printf("\n\tMaxwell House\t%d\t%d\t%d ", d, MaxwellHouse, k);
	printf("\n______________________________________________________________\n");
	printf("\nTotal Amount to be paid: %d", total);
	printf("$");
	
	return 0;

}



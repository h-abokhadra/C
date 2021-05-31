//This program is for displaying a grocery bill for Freshco
//Author: Hoda Abokhadra, May 29th, 2021

#include<stdio.h>

int main(int argc, char** argv)
{
	int itemNumber; //Declaring variables
	int price;
	int amount;
	int total;
	int quantity;
	char status;
	
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
	printf("\n============================================================");
	
	
	
	printf("\n Would you like to add an item to your cart? ");
	scanf("%c", & status);

	do{
	
	printf("\n Enter the item number (1-4): ");
	scanf("%d", & itemNumber);
	
	if(itemNumber == 1){
	
		int price = 1;
		printf("\n Enter the quantity ");	
		scanf("%d", & quantity);
		amount = price * quantity;
		total += amount;
		printf("\n Item\t\tQty\t\tPrice\t\tAmount");
		printf(" Coca Cola %d%d%d\t",quantity,"\t",price,"\t",amount);
	}
	
	else if(itemNumber == 2){
		int price = 2;	
		printf("\n Enter the quantity ");	
		scanf("%d", & quantity);
		amount = price * quantity;
		total += amount;
	}
	
	else if(itemNumber == 3){
		int price = 5;	
		printf("\n Enter the quantity ");	
		scanf("%d", & quantity);
		amount = price * quantity;
		total += amount;
	}
	
	else if(itemNumber == 4){
		int price = 3;	
		printf("\n Enter the quantity ");	
		scanf("%d", & quantity);
		amount = price * quantity;
		total += amount;
	}

	else{
	
		printf("\n Invalid input! Please enter a number between 1-4");	
}

	
} while (status, "y" || status, "Y") ;{


	printf("\n# # # # # # # # # FRESH CO BILL # # # # # # # # #\n");
	printf("\n Item\t\tQty\t\tPrice\t\tAmount\n");
	printf("\n------------------------------------------------------------\n");
	printf("\nTotal Amount to be paid:");


	return 0;
}
}



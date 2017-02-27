//Write a program that receives the number of, Toonies, Loonies, Quarters, Dimes, Nickels and 
//Pennies in a piggy bank and calculates the total amount of money (balance) saved in the piggy 
//bank in Dollars.

#include<stdio.h>

int main(void)
{
	int toonies, loonies, quarters, dimes, nickels, pennies;
	double totalAmount;

	printf("Please enter the number of coins in your piggy bank:\n");
	printf("Toonies: ");
	scanf("%d", &toonies);
	printf("\n");
	printf("Loonies: ");
	scanf("%d", &loonies);
	printf("\n");
	printf("Quarters: ");
	scanf("%d", &quarters);
	printf("\n");
	printf("Dimes: ");
	scanf("%d", &dimes);
	printf("\n");
	printf("Nickels: ");
	scanf("%d", &nickels);
	printf("\n");
	printf("Pennies: ");
	scanf("%d", &pennies);
	printf("\n");

	totalAmount = toonies * 2 + loonies + quarters*0.25 + dimes*0.10 + nickels*0.05 + pennies*0.01;
	printf(" You have $%.2lf in your piggy bank!\n", totalAmount);


	return 0;
}

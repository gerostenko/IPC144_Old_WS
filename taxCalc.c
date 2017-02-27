//Program: Check the number of items, calculate the total price for all the items and add taxes.

#include<stdio.h>

double GetItemPrices(int noOfItems) 
{
	double total = 0;
	int i = 0;
	double price;
	
	for (i = 0; i < noOfItems; i++)
	{
		printf("%d> ", i+1);
		scanf("%lf", &price);
		printf("\n");
		total += price;
	}
	printf("%.2lf\n", total);
	return total;

}

int main(void)
{
	int noOfItems, price;
	double totalAmount, totalWithTaxes;
	printf(" Please enter the number of items: ");
	scanf("%d", &noOfItems);
	printf("\n");

	printf("Please enter the price of the %d items:", noOfItems);
	printf("\n");
	
	if (noOfItems < 2)
		printf("You must have at least 2 items!\n");
	else if (noOfItems > 10)
		printf("You can not have more than 10 items!\n");
	else {
		totalAmount = GetItemPrices(noOfItems);
		totalWithTaxes = totalAmount + (totalAmount*0.13);
	}
	printf("\n");
	printf("No of items    Total before tax    Total after tax\n");
	printf("-------------------------------------------------------\n");
	printf("         %d                 %.2lf             %.2lf\n", noOfItems, totalAmount, totalWithTaxes);

	return 0;
}

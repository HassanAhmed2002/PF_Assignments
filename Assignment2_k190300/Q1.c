#include <stdio.h>
#include <conio.h>

struct Invoice
{
	char num[10];
	char description[100];
	int quantity;
	float price;
};

void initializes(struct Invoice *store)
{
	printf("Enter Part Number: ");
	gets(store->num);
	fflush(stdin);
	printf("Enter Description of Item: ");
	gets(store->description);
	printf("Enter Quantity of Item: ");
	scanf("%d", &store->quantity);
	printf("Enter Price per Item: ");
	scanf("%f", &store->price);
}
float getInvoiceAmount(struct Invoice *store)
{
	if (store->quantity < 0)
	{
		store->quantity = 0;
	}
	if (store->price < 0)
	{
		store->price = 0;
	}
	float amount = store->quantity * store->price;
	return amount;
}
void printing(float amount, struct Invoice *store)
{
	printf("Name: %s\n", store->num);
	printf("Description: %s\n", store->description);
	printf("Quantity: %d\n", store->quantity);
	printf("Price per Item: %.2f\n", store->price);
	printf("Invoice Amount: %.2f", amount);
}

int main()
{
	struct Invoice store;
	initializes(&store);
	float amount = getInvoiceAmount(&store);
	printing(amount, &store);
}

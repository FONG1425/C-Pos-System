#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>
#pragma warning (disable:4996)


// Function

void addSales();
//void addSalesDetail();
//void showSales();
/*void searchSales();
void updateSales();*/
//void salesReport();
/*void purchaseHistorym();
void deleteSales();*/


//Structure Date

typedef struct {
	int day, month, year;
}Date;

//Structure Add New Sales

struct addSales {
	char memName[20];
	char contact[11];
	char memID[7];
	char remark[50];
	char productCode[7];
	double productPrice;
	int quantityProduct;
	double total;
	double commision;
	Date saleDate;
}Info[100];


// Main Function (Menu)

int main(void) {
	int function;

	printf("========================================================================================================================\n");
	printf("                                                  FUNCTION MENU                                                         \n");
	printf("========================================================================================================================\n\n");

	printf("1 - Add New Sales Order\n");
	printf("2 - Search Sales Order\n");
	printf("3 - Update Sales Order\n");
	printf("4 - Show Sales Order\n");
	printf("5 - Sales Order Report\n");
	printf("6 - Member Purchase History\n");
	printf("7 - Delete Sales Order\n");
	printf("8 - Exit\n");
	printf("\nEnter a valid integer (1-8) to select the function > ");
	scanf("%d", &function);


	//Switch Function

	do {

		switch (function) {

		case 1:
			addSales();
			break;
		/*case 2:
			searchSales();
			break;
		case 3:
			updateSales();
			break;
		case 4:
			showSales();
			break;
		case 5:
			salesReport();
			break;
			/*case 6 :
			purchaseHistorym();
			break;
		case 7 :
			deleteSales();
			break;
		case 8:
			exit(0);
			break;
		default:
			printf("\nPlease enter a valid integer !\n\n");
			break;*/
		}



		printf("1 - Add New Sales Order\n");
		printf("2 - Search Sales Order\n");
		printf("3 - Update Sales Order\n");
		printf("4 - Show Sales Order\n");
		printf("5 - Sales Order Report\n");
		printf("6 - Member Purchase History\n");
		printf("7 - Delete Sales Order\n");
		printf("8 - Exit\n");
		printf("\nEnter a valid integer (1-8) to select the function > ");
		scanf("%d", &function);
		rewind(stdin);

	} while (function > 0 || function < 9);


	return 0;
}

void addSales() {
	FILE* fptr;
	fptr = fopen("add_sales_order.txt", "a");
	if (fptr == NULL) {
		printf("Error while opening the file");
		return -1;
	}


}
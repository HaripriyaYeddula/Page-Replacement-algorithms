//Printing menu:P
//printf("");
#include"project.h"
int printMenu()
{
	int choice;
	printf("Make a choice(1-4) :\n");	
	printf("1.ADDITIONAL  REFERENCE BITS\n");
	//2.
	//3.
	printf("4.EXIT\n");
	printf("Your choice: ");
	scanf("%d", &choice);
	if((choice<1)||(choice>4)){
		system("cls");
		choice = printMenu();
	}
	return choice;
}

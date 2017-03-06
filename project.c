//Main function.
#include"project.h"

int main()
{
//variables required!
	option=printMenu();
	//readInput();
	faults=relevantFunction(option);
	printf("No. of page faults are:%d\n",faults);
return 0;
}

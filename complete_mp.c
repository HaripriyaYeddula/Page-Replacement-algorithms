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

int relevantFunction(int option)
{
	int f;
	switch(option)
	{
		case 1:
			f=processInput();
			//faults=add_ref_bits(frames);
			return f;
		default:
			return 0;		
	}
}

int processInput()
{
	int finish=0,input,matchedPage;
	//frames
	printf("Give no. of frames:\t");
	scanf("%d",frames);
	
	//input
	while(1)
	{
		scanf("%d",input);
		if(input>=0)
		{
			matchedPage=match(input);
			if(matchedPage>=0)
			{
				matchLogic(matchedPage);
			}
			else//if(match==-1)
			{
				unmatchLogic(input);
				faults++;
			}
		}
		else
		{
			printf("\nU R DONE! ;)\n");
			finish=1;
		}
		if(finish)
			break;
		
	}

	return faults;
}

int match(int input)
{
	int j;
	for(j=frameno-1;j>=0;j++)
	{
		if(input==pageframe[j])
			flag=1;
			break;
	}
	if(flag)
		return j;
	else
		return -1;
}

void matchLogic(matchedPage)
{
shift[matchedPage]>>1;
shift[matchedPage]=32768|shift[matchedPage];
}

void unmatchLogic(input)
{
	int min;
	if(frameno<frames)
	{
		pageframe[frameno]=input;
		shift[frameno]=32768|shift[frameno];
		frameno++;
	}
	else
	{
		min=minimum();
		pageframe[min]=input;
		shift[min]=0;
		shift[min]=32768|shift[min];
	}

}

int minimum()
{
	int min=0,i;
	for(i=1;i<frameno;i++)
	{
		if(pageframe[i]<min)
		min=i;
	}
	return min;
}



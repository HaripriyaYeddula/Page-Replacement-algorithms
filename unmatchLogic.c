#include"project.h"
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

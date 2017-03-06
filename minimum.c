#include"project.h"
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

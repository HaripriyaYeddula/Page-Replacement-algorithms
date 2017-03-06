#include"project.h"

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


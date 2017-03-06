#include"project.h"
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

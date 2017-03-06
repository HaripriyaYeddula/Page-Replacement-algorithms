#include"project.h"

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

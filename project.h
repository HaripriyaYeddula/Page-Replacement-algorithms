#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int option,frames,frameno,faults,flag,*pageframe,*shift;

//anni functions declaration! (BE MORE SPECIFIC - FOLLOW THE SAME CONVENTIONS)

int		printMenu		(void);
int		processInput	(void);
int 	relevantFunction(int);
//add_ref_bits(int);
int 	match			(int);
void 	matchLogic		(int);
void 	unmatchLogic	(int);
int		minimum			();

//FILE *page_seq;


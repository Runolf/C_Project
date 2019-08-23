#include <stdio.h>
#include <stdlib.h>
#include "arrow.h"

void Shoot(char * quiver)
{
//	flushStdinBuffer();
	int i = 0;
	int choice = 0;
	char Key = '0';
	
	printf("1. One arrow | 2. Multiple arrows\n");
	scanf("%d", &choice);
	
	if(choice == 1)
	{
		printf("\nPress f to shoot\n");
		//Key = '0'; 
		// ne fonctionne pas, cela rajoute quand meme un '\n' et ce n est pas du a celui du printf
		scanf("%c", &Key);
		printf("\tyou shoot\n");
		quiver[i] = '0';
		i++;
	}
	else if(choice == 2)
	{
		do{	
			QuiverState(quiver);
			flushStdinBuffer();
			printf("\nPress f to shoot and x to stop\n");
			scanf("%c", &Key);
			printf("\tyou shoot\n");
			quiver[i] = '0';
			i++;
		}while(Key == 'f');
			//QuiverState(quiver);
	}
	else{
		printf("Bad key\n");
		Menu(quiver);
	}
		
			
	
	Menu(quiver);
	
}

void Menu(char * quiver)
{
	flushStdinBuffer();
	int Choice = 0;
	
	
	printf("\n\t\t\t|___MENU___|\n");
	printf("1. Fill quiver| 2. See quiver state | 3. Shoot|\n");
	
	scanf("%d", &Choice);
	
	switch(Choice)
	{
		case 1:
			FillQuiver(quiver);
			break;
		case 2:
			QuiverState(quiver);
			break;
		case 3:
			Shoot(quiver);
			break;
		default: 
			printf("bad key\n");
			Menu(quiver);
			break;
		
	}
	
	
}

void flushStdinBuffer(void)
{
    int c = 0;

    while(c != '\n' && c != EOF)
        c = getchar();
}

void QuiverState(char * quiver)
{
	int i = 0;
	printf("\nquiver state =\n");
	for(i = 0;i<20;i++)
	{
		printf("%c ", quiver[i]);
	}
	
	Menu(quiver);
}

void FillQuiver(char * quiver)
{
	int i = 0;
	int nbr = 0;
	printf("How much arrows? "); scanf("%d", &nbr);
	for(i = 0;i<nbr;i++)
	{
		quiver[i] = '>';
	}
	
	if(nbr<20)
	{
		for(i = nbr;i<20;i++)
		{
			quiver[i] = '0';
		}
	}
	
	Menu(quiver);
}

void FullQuiver(char * quiver)
{
	int i = 0;
	for(i = 0;i<20;i++)
	{
		quiver[i] = '>';
	}
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curses.h>
#include "func.h"



int main()
{
	float x,y; 
	int Dei, Dei1, exit1; 
	printf ("Menu\n1.One number\n2.Two numbers\n3.Exit\nSelect the action and press Enter\n"); 
	scanf ("%d", &Dei);
	switch (Dei) 
	{ 
		case 1: 
		{ 
			printf ("\n1.Sinus\n2.Cosinus\n3.Square root\n4.Squared\n5.Cubed\n6.Factorial\nSelect the action and press Enter\n"); 
			scanf ("%d", &Dei1); 
			switch(Dei1) 
			{ 
				case 1: 
				{ 
					printf ("Enter the number: "); 
					scanf ("%f", &x); 
					y=sin(x); 
					printf ("sin(%0.3f) = %0.3f\n", x,y); 
					break; 
				} 
				case 2: 
				{ 
					printf ("Enter the number: "); 
					scanf ("%f", &x); 
					y=cos(x); 
					printf ("cos(%0.3f) = %0.3f\n", x,y); 
					break;	
				} 
				case 3: 
				{ 
					printf ("Enter the number: "); 
					scanf ("%f", &x); 
					y=sqrt(x); 
					printf ("%0.3f ^ (1/2) = %0.3f\n", x,y); 
					break;  
				} 
				case 4: 
				{ 
					printf ("Enter the number: "); 
					scanf ("%f", &x); 
					y=pow(x,2); 
					printf ("%0.3f ^ 2 = %0.3f\n", x,y); 
					break; 	
				} 
				case 5: 
				{	 
					printf ("Enter the number: "); 
					scanf ("%f", &x); 
					y=pow(x,3); 
					printf ("%0.3f ^ 3 = %0.3f\n", x,y); 
					break; 
				} 
				case 6: 
				{ 
					printf ("Enter the number: "); 
					scanf ("%f", &x); 
					y=Fact(x); 
					printf ("%0.3f! = %0.3f\n", x,y); 
					break; 	 
				}
			}
			break;
		}
		
	return 0;
}

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
		case 2: 
		{ 
			printf ("\n1.Amount\n2.Difference\n3.Multiplication\n4.Division\n5.Exponentiation\n6.Extraction of the root\nSelect the action and press Enter\n"); 
			scanf ("%d", &Dei1); 
			switch(Dei1) 
			{ 
				case 1: 
				{ 
					printf ("Enter the first summand: "); 
					scanf ("%f", &x); 
					printf ("Enter the second summand: "); 
					scanf ("%f", &y); 
					printf ("%f + %f = %f", x, y, Summa(x,y)); 
					x=Summa(x,y); 
					break; 
				} 
				case 2: 
				{ 
					printf ("Enter the minuend: "); 
					scanf ("%f", &x); 
					printf ("Enter the subtrahend: "); 
					scanf ("%f", &y); 
					printf ("%f - %f = %f", x, y, Minus(x,y)); 
					x=Minus(x,y); 
					break; 
				} 
				case 3: 
				{ 
					printf ("Enter the first multiplier: "); 
					scanf ("%f", &x); 
					printf ("Enter the second multiplier: "); 
					scanf ("%f", &y); 
					printf ("%f * %f = %0.3f", x, y, Product(x,y)); 
					x=Product(x,y); 
					break; 
				} 
				case 4: 
				{ 
					printf ("Enter the dividend: "); 
					scanf ("%f", &x); 
					printf ("Enter the divider: "); 
					scanf ("%f", &y); 
					printf ("%f / %f = %0.3f", x, y, Divit(x,y)); 
					x=Divit(x,y); 
					break; 
				} 
				case 5: 
				{ 
					printf ("Enter the number: "); 
					scanf ("%f", &x); 
					printf ("Enter the exponent: "); 
					scanf ("%f", &y); 
					printf ("%f ? %f = %0.3f", x, y, pow(x,y)); 
					x=pow(x,y); 
					break; 
				} 
				case 6: 
				{ 
					printf ("Enter the number: "); 
					scanf ("%f", &x); 
					printf ("Enter the exponent of root: "); 
					scanf ("%f", &y); 
					printf ("%f %f = %0.3f", y, x, pow(x,1/y)); 
					x=pow(x,1/y); 
					break;
				}
			}
			printf ("\nPress 1 to continue or 0 to exit"); 
			scanf ("%d", &exit1); 
			while (exit1 == 1) 
			{ 
				printf ("\n1.Amount\n2.Difference\n3.Multiplication\n4.Division\n5.Exponentiation\n6.Extraction of the root\nSelect the action and press Enter\n"; 
				scanf ("%d", &Dei1); 
				switch(Dei1) 
				{ 
					case 1: 
					{ 
						printf ("Enter the summand: "); 
						scanf ("%f", &y); 
						printf ("%f + %f = %f", x, y, Summa(x,y)); 
						x=Summa(x,y); 
						break; 
					} 
					case 2: 
					{ 
						printf ("Enter the subtrahend: "); 
						scanf ("%f", &y); 
						printf ("%f - %f = %f", x, y, Minus(x,y)); 
						x=Minus(x,y); 
						break; 
					} 
					case 3: 
					{ 
						printf ("Enter the multiplier: "); 
						scanf ("%f", &y); 
						printf ("%0.3f * %0.3f = %f", x, y, Product(x,y)); 
						x=Product(x,y); 
						break; 
					} 
					case 4: 
					{ 
						printf ("Enter the divider: "); 
						scanf ("%f", &y); 
						printf ("%f / %f = %f", x, y, Divit(x,y)); 
						x=Divit(x,y); 
						break; 
					} 
					case 5: 
					{ 
						printf ("Enter the exponent: "); 
						scanf ("%f", &y); 
						printf ("%f ? %f = %f", x, y, pow(x,y)); 
						x=pow(x,y); 
						break; 
					} 
					case 6: 
					{ 
						printf ("Enter the exponent of root: "); 
						scanf ("%f", &y); 
						printf ("%f %f = %f", y, x, pow(x,1/y)); 
						x=pow(x,1/y); 
						break; 
					} 
				} 
				printf ("\nPress 1 to continue or 0 to exit"); 
				scanf ("%d", &exit1); 
			} 
		}
		case 3: 
			break;
	}
	return 0;
}

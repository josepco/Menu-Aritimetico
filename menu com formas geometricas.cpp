//menu figuras
#include"stdio.h"
#include"stdlib.h"
#include"math.h"
#define pi 3.14
main()
{
	char op ; float l,br,hr,r,D,d;
	printf("\n\n\n\t\t*****************");
	printf("\n\tFiguras");
	printf("\n\t\t**********************");
	printf("\n\n\tDigite 1 para quadrado:");
	printf("\n\n\tDgite 2 para retangulo:");
	printf("\n\tDigite 3 para Circunferencia:");
	printf("\n\tDigite 4 para Losango:");
	printf("\n\tDigite 5 para Trapezio");
	printf("\n\tDigite 6 para Triangulo qualquer");
	printf("\n\n\tEscolha no menu");
	scanf("%s",&op);
	switch(op)
	{
		case '1':
		{
			printf("\n\tEScolha quadrado");
			printf("\n\tInforme o lado:");
			scanf("%f",&l);
			printf("\n\tArea=%.2f",pow(l,2));
			printf("\n\tPerimetro=%.2f",4*l);
			break;
		}
		case'2':
			{
				printf("\n\tEscolha Retangulo:");
				printf("\n\tInforme Base e altura:");
				scanf("%f%f",&br,&hr);
				printf("\n\tArea=%.2f",br*hr);
				printf("\n\tPerimetro=%.2f",2*(br+hr));
				break;
			}
			case'3':
				{
					printf("\n\tEScolha circunferencia");
					printf("\n\tInforme o raio");
					scanf("%f",&r);
					printf("\n\t Area = %.2f", pi * pow(r,2));
					printf("\n\tComprimento=%.2f",2*pi*r);
					break;
				}
				case '4':
					{
						printf("\n\tVoce escolheu losango");
						printf("\n\tInforme as diagonais");
						scanf("%f%f",&D,&d);
						printf("\n\tArea=%.2f",(D*d)/2);
						break;
					}
					default:
						printf("\n\tOpcao invalida");
					}
				}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	


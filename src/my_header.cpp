#include "cstdio"
#include "my_header.hpp"

long int saisir_anneau(long int val_min,long int val_max,long int num_anno)
{
	long int valeur_saisie;
	int condition = 0;
	
	printf("Taper la valeur du premier anneau: ");
	
	while(condition == 0 )
	{
	   printf("%u",&valeur_saisie);
	   if(valeur_saisie >= val_min && valeur_saisie <= val_max)
		   condition = 1;
	   else 
		   printf("valeur incorrecte,veuillez resaisir votre valeur:)
	}
	
	
	return valeur_saisie;
}

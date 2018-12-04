//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
    unsigned char nom[100],prenom[100],phrase[100];
    unsigned long int annee_de_naissance;
    
    
    printf("nom:");
    scanf("%s",nom);
    printf("prenom:");
    scanf("%s",prenom);
    printf("naissance:");
     scanf("%lu",&annee_de_naissance);
	while(1)
    {
    printf("Je m'appelle %s %s et j'ai %lu ans",nom,prenom,2018-annee_de_naissance);
	}
	
    
    
    
    return 0;
}

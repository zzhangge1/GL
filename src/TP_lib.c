/****************************************************
*                                                   *
*      TP_lib  pour Thèmes Génie Logiciel  1 et 2   *
*                 GL1 + GL2							* 
*													*
*****************************************************
Auteurs : S. Moutault - A. Priou
Version : 10/9/07 V3.1
Fichier : TP_lib.h
*****************************************************/

#include <ansi_c.h>	   /* non portable (CVI) */
#include <utility.h>

//#define AGNES_VERSION
//#define DEBUG

/*************************** calculer_max_2_entiers **************************/
long int  calculer_max_2_entiers ( long int a, long int b ) 
	{
	/* définition des variables locales */
	long int max2 ;
	
	/* traitement : */    
	max2 = a > b ? a : b ;
	
	return max2 ;  
	}

/*************************** Biblio pour le calcul de remise **************************/
	
double saisir_montant ( void )
	{
	/* définition des variables locales */
	double montant ;
	
	/* traitement : */   
	rewind (stdin );								/* vide le tampon de saisie du clavier */
	printf("\n\n Tapez le montant des achats : "); 
	scanf("%lf", &montant ) ;						/* saisie non blindee ! */
	
	return montant ;  
	}

void afficher_remise ( double montant_final, double remise )
	{
	/* définition des variables locales */
//	double montant ;
	
	/* traitement : */
	printf("\n Apres remise de %8.2lf euros, le prix a payer est %8.2lf euros.", remise, montant_final );
	}
	
	/* 1er argument = montant APRES déduction de la remise */
	
/*************************** extraire_un_chiffre **************************/

long extraire_un_chiffre ( long Nbre , long PositionChiffre )   
	{
	/* définition des variables locales */
	long int chiffre, i ;
	
	/* traitement : */    
	for (i=0; i<PositionChiffre ; i++)	   Nbre = Nbre / 10 ;
	
	chiffre = Nbre % 10 ;	

	return chiffre ;  
	}

#ifdef AGNES_VERSION
/**************************** inserer_un_chiffre ****************************/
// position à insérer supposée nulle.

long int inserer_un_chiffre( long Chiffre, long Nbre, long Position )
	{
	/* définition des variables locales */
	long Nbre_apres_insertion, i ;
	
	/* traitement : */    
	for (i=0; i<Position ; i++)	   Chiffre = Chiffre * 10 ;
	
	Nbre_apres_insertion = Nbre + Chiffre ;	

	return Nbre_apres_insertion ;  
	}

#else /*AGNES_VERSION*/
/**************************** inserer_un_chiffre ****************************/
// position à insérer prealablement effacee.

long int inserer_un_chiffre(long Nbre, long Chiffre, long Position )
   {
   /* définition des variables locales */
   long Nbre_apres_insertion, i ;
   long Chiffre_origine; /** SbM : Ajout */
     
   Chiffre_origine = extraire_un_chiffre (Nbre, Position); /** SbM : Ajout */
   
   /* traitement : */      
   for (i=0; i<Position ; i++)
       { /** SbM : Ajout */
       Chiffre = Chiffre * 10 ;
       Chiffre_origine = Chiffre_origine *10; /** SbM : Ajout */
       } /** SbM : Ajout */

   Nbre_apres_insertion = Nbre - Chiffre_origine + Chiffre ;        /** SbM : Modif */ 
   return Nbre_apres_insertion ;    }

#endif /* AGNES_VERSION */

/******************************************************************************
 Bibliotheque pour le lancer aléatoire d'un dé (valeurs obtenues entre 1 et 6)
*******************************************************************************/

short int LancerDe( void )
	{
	short n;
	
	time_t temps ;
	static short premier_appel =1;

	if (premier_appel==1) 	   /* pour éviter de démarrer tjs de la meme facon */
		{
		srand(time(&temps));
		premier_appel = 2;
		}
		
	n = rand()%6 +1 ;
	
	return n;
	}

/******************************* diverses fonctions (TP GL2) ****************************/
int essayerCode(unsigned short code)
{
   return code == 2486;
}

void afficherCodeAcces(unsigned short code)
{
  printf("Le code secret est : %04d\n", code); 
}

unsigned char lirePortA(void)
{
   int c;
   c=KeyHit();
   if (c)
      c=GetKey();
   return (unsigned char)c%256;
}

void allumerLed1(void)
{
  printf("Led 1 allumee !\n");
}

void attendreSec(long sec)
{
  Delay(sec);
}

void ecrirePortA(unsigned char val)
{
  int i;
  
  for (i=0; i<8; i++)
  {
    if (val & 1)
      printf("*");
    else
      printf(" ");
    val/=2;
  }
  printf("\n");
}


void afficherChiffre(short chiffre)
{
  if (chiffre >= 0 && chiffre <= 'Z' - 'A' + 10)
    if (chiffre < 10)
      printf("%d",chiffre);
    else
      printf("%c", (char)(chiffre - 10 +'A'));
  else
    printf("%c", '~');
}

int testerNombre(long nombre)
{
  int c=0;
 
  printf("Le nombre secret est il plus grand (touche [s] puis [ent]),"
      "plus petit (touche [i] puis [ent]) ou egale (touche [e] puis [ent]) a %ld ?\n", nombre);
  
  while (c != 's' && 
         c != 'e' && 
         c != 'i')
  {
    c=getchar();
#ifdef DEBUG
    printf("Code touche enfoncée : %d\n", c);
#endif
  }
  
  if (c=='i')
    return -1;
  else if (c=='s')
    return +1;
  else
    return 0;
}

void afficherNbTentatives(long nbTentatives)
{
  if (nbTentatives > 1)
    printf("\nNombre secret trouve en %d tentatives.\n", nbTentatives);
  else
    printf("\nNombre secret trouve en %d tentative.\n", nbTentatives);
    
}

/*int estBissextile(unsigned long date)
{
  unsigned long annee;
  
  annee = date - date / 10000 * 10000;
  return !(annee % 4) && ( (annee % 100) || !(annee % 400) );
} */

void afficherJour(unsigned long date, unsigned short jour)
{
  char jourDeLaSemaine[][10]={"lundi", "mardi", "mercredi", "jeudi", 
      "vendredi", "samedi", "dimanche"};
  char moisDeLAnnee[][10]={"janvier", "fevrier", "mars", "avril", "mai", 
      "jun", "juillet", "aout", "septembre", "octobre", "novembre", "decembre"};
  int j, m, a;
  
  j = date / 1000000;
  m = date / 10000 - j * 100;
  a = date - j * 1000000 - m * 10000;
  
  if (jour > 0 && jour <= 7 && m > 0  && m <= 12)
  	printf ("Le %d %s %d est un %s\n", j, moisDeLAnnee[m-1], a, jourDeLaSemaine[jour -1]);
  else
  	printf ("Erreurs dans le numero du jour ou dans le numero du mois !\n");
}

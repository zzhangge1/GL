/***********************************************
*                                              *
*                TP_lib_suite                    *
*                                              *
************************************************
Auteurs : S. Moutault, Ag. Priou
Version : nov 2011   
Fichier : TP_lib_suite.c
************************************************
***********************************************/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/*-------------------------  LOTO ---------------------------------*/

static int tableLoto[50];

void initialiserTirage(void)
{
  static int premierAppel = 1;
  int i;
  
  if (premierAppel)
  {
    srand(time(0));
    premierAppel = 0;
  }
  for (i = 0; i < 50; i++)
    tableLoto[i] = 0;
}

short tirerNumero(void)
{
  short n;
  int i = 0;
  
  n = rand() % 49 + 1;
  while (tableLoto[n] == 1 && i < 50)
  {
    n = (n + 1) % 49;
    if (n == 0)
      n = 49;
    i++;
  }
  if (i == 50)
    n = -1;
  else
    tableLoto[n] = 1;
  return n;
}

/*-------------------------  Génétique ---------------------------------*/

char tirerNucleotide(void)
{
  static int premierAppel = 1;
  char n, c;
  
  
  if (premierAppel)
  {
    srand(time(0));
    premierAppel = 0;
  }

  n=rand()%4;
  switch (n)
  {
    case 0:
      c = 'A';
      break;
    case 1:
      c = 'C';
      break;
    case 2:
      c = 'G';
      break;
    case 3:
      c = 'T';
      break;
  }
  return c;
}

/*-------------------------  divers ---------------------------------*/

void faireUnTour(void)
{
  printf("Et un tour de fait... Un !!\n");
}

int estPremier(long nombre)
{
  long i;
  int pflag = 1;
  
  for (i = 2; i < nombre / 2 + 1; i++)
    if (nombre % i == 0)
    {
      pflag = 0;
      break;
    }
  return pflag;
}


void afficherCompteARebours(short compteur)
{
  printf("Compte a rebours : %d\n", compteur);
}

double f(double x)
{
  double fx;
  
  if (x != 0)
    fx = sin(x)/x;
  else
    fx = 1;
  return fx;
}

/*----------------------------  JouerUnTour ---------------------------- */

short int LancerDe2( void )
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

/* fonction à écrire dans TP2, utilisée (toute faite) ds les TP suivants */

long int  JouerUnTour ( void ) 
	{
	/* définition des variables locales */
	long int score_tour = 0 ;
	short int valeur_de = 0 ;
	
	/* traitement : */    
	while ( valeur_de != 1 )
		{
		valeur_de = LancerDe2( );  
		// printf("  %hd", valeur_de);
		
		switch (valeur_de)
			{
			case 2 :
			case 4 :
			case 6 :
				score_tour = score_tour + valeur_de ;
				break ;
			case 3 :
				score_tour = score_tour * 2 ;
				break ;
			case 5 :
				score_tour = score_tour - 2 ;
				if ( score_tour<0 )   score_tour = 0 ;
				break ;
			}
		}
	
	return score_tour ;  
	}


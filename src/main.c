//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"
#include "math.h"

#define seuil 5
#define seuilh 200
#define seuilb -100

int main(void)
{ 
    unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9};
    int sat[10] ;
    unsigned char dist[10]={9,5,0,5,8,6,1,4,3,2};
    unsigned char a[5]={9,5,0,5,8};
    unsigned char b[5];
    unsigned char mirror[20];
    unsigned char i,o, p,l,k ,j,h;
	
	
     for(i=0;i<10;i++)
      if(bin[i] < seuil)
         bin[i] = 0;
      else
         bin[i] = 1;
	
	
	for (o=0;o<10;o++)
	  sat[o] = rand(); 
	if(sat[o] > seuilh)
	  sat[o] = seuilh ;
	else if (bin[o] < seuilb)
	  sat[o] = seuilb  ;
	else
          sat[o] = bin[o] ;
		
		
    
	for (p=1;p<10;p++)
	  dist[p]=fabs(dist[p]-dist[p-1]);
	
	
       
	for(k=0;k<5;k++)
	       b[k]=a[5-k];
	
	
	
	for(j=0;j<10;j++)
		mirror[j]=rand();
	
	for(h=10;h<20;h++)
		mirror[h]=mirror[19-h];
	
	
	
	
	
	
	
	
	
		
	
	
	

			

    return 0;,
}

//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"
#define seuil 5
#define seuilh 200
#define seuilb -100
int main(void)
{ 
    unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9},i;
	int sat[10] ;
	unsigned char o, p ;
	
	
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
		
		
    
	for (p=0;p<10;p++)
	{
	}
		
	
	
	

			

    return 0;
}

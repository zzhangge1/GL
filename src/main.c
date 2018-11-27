//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite"

int main(void)
{
    unsigned short int i,j,k,gagnante[6],joueur[6]={1,20,3,36,15,43},commun;
    
    for(i=0;i<100;i++)
    {
        intialiserTirage();
        
        for(j=0;j<6;j++)
        {
            gagnante[j] = tirerNumero();
            
            for(k=0;k<6,k++)
            {
                if(joueur[k] == gagnante[j]
                    commun++;
               
            }
        }
    }
    return 0;
}

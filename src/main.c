//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"
#include "math.h"
#include "CVI_GUI.h"

int main(void)
{
    char point = 0, resultat;
    resultat = LancerDe();
    while (resultat != 1)
    {
        if(resultat%2 ==0)
        {
            point = point + resultat ;
        }
        
        else if(resultat = 3)
        {
            point = point * 2;
        }
        
        else
        {
            point = point - 2;
        }
            
         
        
        if (point < 0)
         {
             point = 0;
         }
        else
        {
            point = point;
        }
        
        
          
    }
    return 0;
}

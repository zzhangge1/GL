//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"

int main(void)
{
    int resultat;
    unsigned short code;
    unsigned short i;
    for(i = 0;i<10000;i++)
        resultat = essayerCode(i);
        if(resultat = 1)
        afficherCodeAcces(i);
    
    return 0;
}

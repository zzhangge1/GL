//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
    unsigned long int S1 = 3,n = 6;
    
    while(n<3684)
    {
        S1=S1+n;
        n = n+3;
    }
        
    return 0;
}

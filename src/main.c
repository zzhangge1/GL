//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "math.h"

int main(void)
{
    int val1 = 1,val2 = 1,a = 1,S = 0;
    
    while (a <=20 )
    {
        if (val1%3 == 0 || val1%7 == 0)
        {
            S = S + val1;
            a = a + 1;
            val1 = val1 + 1;
            val2 = val2 + 1;
        }
        
        else 
        {
            val1 = val1 + 1;
            val2 = val2 + 1 ;
            a = a + 1;
        }
            
            
            
    return 0;
}

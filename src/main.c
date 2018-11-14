//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "stalib.h"

int main(void)
{
    unsigned short int i = 1, j, S1 = 0;
    
    while (i<=12)
    {
        j = rand(10)+1;
        S1 = S1 + j;
        i = i + 1;
    }
    return 0;
}

//  Copyright (c) 2018 Antoine Tran Tan
//

#include "studio.h"

int main(void)
{
    char phrase[100]="I have a triangle which has 3 points Their coordinates are (1,0）,（2,0）,（1,1）",message[100],title[100];
    char nom_fig[100];
    unsigned char nb_pts,i,j;
    unsigned char x[5],y[5],xety[10];
    sscanf(phrase,"%*s %*s %*s %s %*s %*s %u %*s %*s %*s %*s %u %*s %u %*s %*s %*s %u %*s %u %*s %*s %*s %u %*s %u %*s",nom_fig,&nb_pts,&xety[10]);
    
    if(nb_pts<5)
    {
        for(j=nb_pts*2;j<10;j++)
        {
            xety[j]=-1;
        }
        
    }
    else
    {
    }
    
    
    
    for(i=0;i<10;i++)
    {
        if ( i % 2 == 0)
        {
            x[i/2]=xety[i];
        }
        else
        {
            y[(i-1)/2]=xety[i];
        }
    }
    
    sprintf(message,"La figure %s possede %u sommets",nom_fig,&nb_pts);
    sprintf(title,"c'est tres chaud mais j'essaie");
    MessagePopup (title, message);


    
    

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int veces,ran,j,valor,cont1,cont2,cont3,cont4,cont5,cont6;
    cont1=0;
    cont2=0;
    cont3=0;
    cont4=0;
    cont5=0;
    cont6=0;
    time_t time1;
    srand((unsigned)time(&time1));
    printf("cuantas veces se lanzara el dado?\n");
    scanf("%d",&veces);
    printf("que valor te interesa\n");
    scanf("%d",&valor);
    
    if(valor>=7 || valor<=0)
    printf("error de valor");
    else
    {
        for(j=1;j<=veces;j++)
        {
            ran=(rand()%6)+1;
            printf("\n%d",ran);
            if(ran==1)
            cont1++;
            else if (ran==2)
            cont2++;
            else if(ran==3)
            cont3++;
            else if (ran==4)
            cont5++;
            else if (ran==5)
            cont5++;
            else 
            cont6++;
        }
        if(valor==1)
        printf("\n=>el %d cayo %d veces<=",valor,cont1);
        else if(valor==2)
        printf("\n=> el %d cayo %d veces<=",valor,cont2);
        else if(valor==3)
        printf("\n=> el %d cayo %d veces<=",valor,cont3);
        else if(valor==4)
        printf("\n=>el %d cayo %d veces<=",valor,cont4);
        else if(valor==5)
        printf("\n=>el %d cayo %d veces<=",valor,cont5);
        else
        printf("\n=>el %d cayo %d veces<=",valor,cont6);
        
        }
    
}

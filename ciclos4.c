#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i;
    for(i=65;i<=90;i++)
    if(i==65||i==69||i==79||i==73||i==85)
    printf("**%c** es una vocal\n",i);
    else if(i==77)
    printf("$$$$$%c$$$$$ con esta letra empieza mi nombre\n",i);
    else
    printf("-%c- es consonante\n",i);

}

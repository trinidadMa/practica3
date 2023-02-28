#include <stdio.h>

int main()
{
    int entero;

   printf("ingrese un numero entero\n");
 scanf("%d",&entero);
 
 if(entero>=0){
     printf("los factores del numero entero %d son:\n",entero);
     for(int i=1; i<=entero;i++){
         if(entero%i==0)
         printf("%d-",i);
         
     }
 }else{  printf("valor incorrecto");
 }
    return 0;
}

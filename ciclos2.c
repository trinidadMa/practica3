#include <stdio.h>

int main()
{
    int lim,i,sum;
    sum=0;
    
    printf("introduzca el limite\n");
    scanf("%d",&lim);
    
    if(lim>0){
        for(i=1;i<=lim;i+=2)
    {
    sum+=i;
    printf("%d\t",i);
}
printf("la suma de los numeros impares son %d",sum);
}
else if (lim<0){
    for(i=-1;i>=lim;i-=2)
    
{
sum+=i;
printf("%d\t",i);
}
printf("\n la suma de los numeros impares son %d",sum);
}
else
printf("numero 0");

}

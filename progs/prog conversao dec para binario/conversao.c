#include <stdio.h>
int main()
{
    int num;
    int aux=7;
    int bin[7];
    printf("Digite um numero: ");
    scanf("%d",&num);
    while(aux>=0)
    {
        bin[aux]= num%2;
        num=(num/2);
        aux--;
    }
    for(aux=0;aux<=7;aux++){
        printf("%d",bin[aux]);
    }
}

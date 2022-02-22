#include <stdio.h>
int main()
{
    int bin[8];
    int base[8] = {128,64,32,16,8,4,2,1};
    int dec=0;
    printf(" Digite um numero base 2: ");
    for(int i=0;i<=7;i++){
        scanf("%d",&bin[i]);
        if(bin[i]==1){
            dec=dec+base[i];
        }
    }
    printf("\n\n ");
    for(int i=0;i<=7;i++){
        printf("%d",bin[i]);
    }
    printf(" --> %d",dec);
}

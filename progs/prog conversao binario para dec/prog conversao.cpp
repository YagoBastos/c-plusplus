#include <stdio.h>
#include <string.h>
int main()
{
    char bin[8];
    int base[8] = {128,64,32,16,8,4,2,1};
    int dec=0;
    printf(" Digite um numero base 2: ");
    gets(bin);
    for(int i=0;i<=7;i++){
        if(bin[i]=='1'){
            dec=dec+base[i];
        }
    }
    printf(" %s --> %d",bin,dec);
}

#include <stdio.h>

int main()
{
	int dia, mes, ano, num_dia;
    printf("Digite dia: ");
    scanf("%d",&dia);
    printf("Digite mes: ");
	scanf("%d",&mes);
	printf("Digite ano: ");
    scanf("%d",&ano);
    
    if(mes==1){
        num_dia=dia;
    }
    else if(mes==2){
        num_dia=dia+31;
    }
    else if(mes==3){
        num_dia=dia+59;
    }
    else if(mes==4){
        num_dia=dia+90;
    }
    else if(mes==5){
        num_dia=dia+121;
    }
    else if(mes==6){
        num_dia=dia+151;
    }
    else if(mes==7){
        num_dia=dia+182;
    }
    else if(mes==8){
        num_dia=dia+212;
    }
    else if(mes==9){
        num_dia=dia+243;
    }
    else if(mes==10){
        num_dia=dia+273;
    }
    else if(mes==11){
        num_dia=dia+304;
    }
    else if(mes==12){
        num_dia=dia+334;
    }
    
    printf("%d dia do ano",num_dia);
}

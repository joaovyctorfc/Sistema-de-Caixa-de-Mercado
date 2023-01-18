#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


int seletor;
////////////////////////////struct////////////////
struct compras{
    int quantidade;
    float valor;
    char nome[100];
};
//////////////////////////////////////////////////

int main(void)
{


FILE *arq;
arq=fopen("dados.txt","a");

////////////////////////////////////////////
    int soma;
    int maiscompras,maiscompras2;
    float total=0, totaldia=0,somadia;
    char CPF[11];
/////////////////////////////////////////////

    void compraProduto(){

 struct compras compras;

    int maiscompras;

system("clear");
    do{
    printf(" Digite o nome do produto: \n ");
    scanf("%s",&compras.nome);

    printf(" Valor do produto: \nR$ ");
    scanf("%f",&compras.valor);

    printf(" Quantidade de produto:\n  ");
    scanf("%d",&compras.quantidade);
do{
            if(compras.quantidade>=1){
                soma=compras.quantidade*compras.valor;

            }

                 }while(maiscompras2==1);total+=soma;


printf("  Deseja compras mais produtos?\n  Digite 1 para Sim / 2 para Nao \n");
scanf("%d",&maiscompras);

if (maiscompras==1){

maiscompras2==1;

}

} while (maiscompras==1);totaldia=somadia;
system("clear");
printf("-------------------------------------------");
        printf("\n  Total a pagar: R$%.3f \n",total);

 fprintf(arq,"\n  CPF = %s",CPF);
 fprintf(arq,"\n  Total = %f",total);




        {
            return 0;
        }


    }




/////////////////////////////////////////////////////////////////////////


    printf("      Sistema da lojinha\n\n");
    printf(" (1) - Realizar compra\n");
    printf(" (2) - Realizar soma total do dia\n");
    printf(" (3) - Vendas de cada cliente\n");
    printf(" (4) - Desligar programa\n");
    printf("\n     Escolha a opcao desejada: \n\n");
    scanf("%d",&seletor);

/////////////////////////////////////////////////////////////////
system("clear");
        if(seletor==1){
            printf(" Digite o CPF:\n ");
                scanf("%s",&CPF);
                    setbuf(stdin, NULL);
                        compraProduto();


        }
////////////////////////////////////////////////////////////////

    if(seletor==2){
        float total;
        fscanf(arq,"%f",&total);
        printf(arq,"  Valor Total do Dia: \nR$ %f ",totaldia);
        return 0;
    }
////////////////////////////////////////////////////////////////

    if(seletor==3) {
        FILE *arq;
            arq=fopen("dados.txt","r");
            char CPF[11];
            float total;
            fscanf(arq,"%s %f",&CPF,&total);
            printf("CPF:%s\ntotal:%f",CPF,total);
    }
////////////////////////////////////////////////////////////////


    if(seletor==4) {

        return 0;
    }
///////////////////////////////////////////////////////////////

}

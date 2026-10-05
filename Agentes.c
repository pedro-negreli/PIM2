#include <stdio.h>
#define QUA 50



void linha()
{
printf("==================================================================\n");
}
int Menu()
{
       int escolha = 0;    
       linha();  
       printf("                  BEM VINDO AO CATALOGO                         \n");   
       linha();
       
       
    printf("1-Cadastro\n");
    printf("2-Lista\n");
    printf("3-Buscar pelo ID\n");
    printf("4-Buscar pelo nome\n");
    printf("5- Encerrar programa\n");
    
    
    scanf("%d",&escolha);

    return escolha;
}

int main() {
// Vetores principais que vão esta em parapelo
int id[QUA];
char agente[QUA][80];
char prompt[QUA][1000];
char descricao[QUA][1000];
int media_nota[QUA];
int quantida_avaliacao[QUA];
//////////////////////////////////////////////////////////////////////////////////
int escolha;



do{
//// Menu sendo exibido e pedidndo escolha
escolha = Menu();

////entrando nas escolhas 
switch (escolha)
{
case 1:
    linha();
    printf("Vc escolheu cadastro\n");
    break;

case 2:
    linha();
    printf("Você escolheu Lista\n");
    break;

case 3:
    linha();
    printf("Você escolheu buscar pelo ID\n");

    break;
case 4:
    linha();
    printf("Você escolheu buscar pelo Nome\n");


default:
// caso tenha digitado algo errado 
    printf("Essa opção não existe!!!\n");
    break;
}


}while(escolha != 5);

printf("Você encerrou o programa :(");





    return 0;
    }
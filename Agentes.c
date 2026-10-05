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



int escolha = Menu();
printf("%d\n", escolha);


    return 0;
    }
#include <stdio.h>
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

int teste_menu = Menu();
printf("%d", teste_menu);


    return 0;
    }
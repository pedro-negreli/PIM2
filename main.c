#include <stdio.h>
#include "funcoes.h"
#define QUA 50

















int main()
{
char nome_user[100] = "";
int menu;
int verificar_usuario = 0;






verificar_usuario = QuemE(nome_user, sizeof(nome_user));

if(verificar_usuario == 1)
{
    do{
    menu = MenuA(nome_user);
    switch (menu)
    {
    case 1:
        printf("Lista\n");
        break;
        
    case 2:
        printf("Buscar\n");
        break;
    
    case 3:
        printf("Cadastrar\n");
        break;
    case 4:
        printf("Encerrar programa\n");
        break;
    default:
        printf("Essa opção não existe!!\n");
        break;
    }
    }while(menu != 4);
}
else if (verificar_usuario == 0)
{
    do{
    menu = MenuU(nome_user);
    switch (menu)
    {
    case 1:
        printf("Lista\n");
        break;
    
    case 2:
        printf("Buscar\n");
        break;
    
    case 3:
        printf("encerrar o programa\n");
        break;
    
    default:
        printf("essa opção não existe\n");
        break;
    }
    }while(menu != 3);
}
else
{
    printf("acesso negado!!");
}




return 0;
}
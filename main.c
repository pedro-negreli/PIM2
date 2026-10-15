#include <stdio.h>
#include "funcoes.h"
#define MAX 50

















int main()
{
    /////////// agente ////////////////
int id[MAX];
int proximo_id = 0;

char nome_agente[MAX][81];
char prompt[MAX][1001];
char categoria[MAX][41];
char descricao[MAX][301];


int status_cada[MAX];
float nota[MAX];

int total_agentes = 0;
//////////////////////////////
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
        CadastrarAgente(id,
            nome_agente,
            prompt,
            categoria,
            descricao,
            status_cada,
            nota,
            &total_agentes,
            &proximo_id);
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
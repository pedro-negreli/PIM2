#include <stdio.h>
#include <string.h> 
#include "funcoes.h"


void linha()
{
printf("==================================================================\n");
}


int QuemE(char nome_user[], size_t tamanho)
{   
    char senhat[10];
    int tentativa = 0;
    char senha[10] = "adm123";
    
    do{
    int escolha = 0;
    linha();
    printf("Quem é você:\n");
    printf("      1-Funcionario              2-Gerente\n");
    scanf("%d", &escolha);
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    if(escolha == 1)
    {
        printf("Digite seu nome:\n");

        fgets(nome_user, tamanho , stdin);
        nome_user[strcspn(nome_user, "\n")] = '\0';

        printf("bem vindo %s\n", nome_user);
        return 0;
        
    }
    else if(escolha == 2)
    {
        printf("Digite seu nome: ");

        fgets(nome_user,tamanho, stdin);
        nome_user[strcspn(nome_user, "\n")] = '\0';

        
        for(int i = 1;tentativa <= 3;i++ )
        {
            printf("digite a senha de gerente:\n");
            scanf("%s", senhat);
            if(strcmp(senha, senhat ) == 0)
            {
                printf("senha correta\n");
                return 1; 
            }
            else
            {
            printf("senha incorreta tente novamente ");
            tentativa++;
            printf("%d\n", tentativa);
            }

            if(tentativa == 3)
            {
                return -1;
            }
        }

    }
    }while(1);
}

int MenuU(char nome[])
{
       int escolha = 0;    
       linha();  
       printf("                  BEM VINDO AO CATALOGO                         \n"); 
       printf("                          %s                          \n",nome);
       linha();
       
       
    printf("1-Lista\n");
    printf("2-Buscar\n");
    printf("3- Encerrar programa\n");
    
    
    scanf("%d",&escolha);

    return escolha;
}

int MenuA(char nome[])
{
           int escolha = 0;    
       linha();  
       printf("                  BEM VINDO AO CATALOGO                         \n");  
       printf("                          %s              \n", nome); 
       linha();
       
       printf("1-Lista\n");
       printf("2-Busca\n");
       printf("3-Cadastrar\n");
       printf("4-Encerrar programa\n"); 
    
    
    scanf("%d",&escolha);

    return escolha;
}
#include <stdio.h>
#include <string.h> 
#include "funcoes.h"
#define MAX 50

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
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
{
}

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
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
{
}

    return escolha;
}


void Fgetsauto(size_t tamanho, char cadastroitem[])
{
    if (fgets(cadastroitem, tamanho, stdin) != NULL)
    {
        cadastroitem[strcspn(cadastroitem, "\n")] = '\0';
    }
}

void CadastrarAgente(
    int id[],
    char nome_agente[][81],
    char prompts[][1001],
    char categoria[][41],
    char descricoes[][301],
    int status[],
    float nota_cada[],
    int *total_agentes,
    int *proximo_id
)
{
float nota_inicial = 0;

if(*total_agentes < 50)
{
    printf("Qual nome do seu agente: \n");
    Fgetsauto(81,nome_agente[*total_agentes]);

    printf("Qual a categoria do seu agente:\n");
    Fgetsauto(41,categoria[*total_agentes]);

    printf("Faça uma descrição do agente:\n");
    Fgetsauto(301,descricoes[*total_agentes]);

    printf("Insira o prompt do agente:\n");
    Fgetsauto(1001,prompts[*total_agentes]);

    printf("Adicione a nota inicial para o agente\nDigite uma nota entre 0 e 5\n");
    do{
        int resultado;
        int c;
        resultado = scanf("%f", &nota_inicial);
        while ((c = getchar()) != '\n' && c != EOF);

        if(resultado == 1 && nota_inicial >= 0 && nota_inicial <= 5)
        {
            printf("Nota confirmada\n");
            break;
        }
        else
        {
            printf("Nota incorreta\nDigite uma nota entre 0 a 5\n");
        }

        if(c == EOF)
        {
        return;
        }
    }while(1);
    nota_cada[*total_agentes] = nota_inicial;
    
    status[*total_agentes] = 1;


    id[*total_agentes]= *proximo_id + 100;
    (*proximo_id)++;



    (*total_agentes)++;
}
else
{
    printf("\n!!Limite de agente atingido!!\n");
}
}

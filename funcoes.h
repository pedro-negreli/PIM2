#ifndef FUNCOES_H
#define FUNCOES_H

void linha(void);
int QuemE(char nome[], size_t tamanho);
int MenuA();
int MenuU();
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
);

#endif
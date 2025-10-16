#include <stdio.h>

//A função recebe como entrada a fila de tarefas com as informações na struct TCB (Fila)
tarefa escalonador_prioridade_preemptivo (Fila *A) {
    int i = 0; //contador de tarefas.
    int k; //indice auxiliar para a varredura da maior prioridade. 
    Tarefa escolhida = A->tarefas[inicio]; //recebe a primeira da fila.
    Tarefa *varredor = A->inicio; //indice auxiliar para a contagem de tarefas.
    Tarefa tarefaAtual; //indice auxiliar para a varredura da maior prioridade. 
//Preciso saber quantas tarefas tem na fila para o laço de repetição for.
    while (varredor != NULL){
        i++;
        varredor = varredor->proximo; 
    }
    if(i > 1){//verifica se a fila não é vazia.
       //Retorna a tarefa de maior prioridade da fila.
       for(j = 1; j < i; j++){
           k = (A->inicio + j);
           tarefaAtual = A->tarefas[k];
           if (tarefaAtual.prioridade > escolhida.prioridade){
               escolhida = tarefaAtual;
           }   
    } 
        return escolhida; 
}

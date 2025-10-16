#include <stdio.h>

//A função recebe como entrada a fila de tarefas com as informações na struct TCB (Fila)
tarefa escalonador_fifo (Fila *A) {
    int i = 0; //contador de tarefas.
	int j; //indice auxliar de contador de tarefas.
    int k; //indice auxiliar para a varredura de menor instante. 
    Tarefa escolhida = A->tarefas[inicio]; //recebe a primeira da fila.
    Tarefa *varredor = A->inicio; //indice auxiliar para a contagem de tarefas.
    Tarefa tarefaAtual; //indice auxiliar para a varredura de menor instante. 
//Preciso saber quantas tarefas tem na fila para o laço de repetição for.
    while (varredor != NULL){
        i++;
        varredor = varredor->proximo; 
    }
    if(i >= 1){//verifica se a fila não é vazia.
       //Retorna a tarefa de menor instante da fila.
       for(j = 1; j < i; j++){
           k = (A->inicio + j);
           tarefaAtual = A->tarefas[k];
           if (tarefaAtual.instante < escolhida.instante){
               escolhida = tarefaAtual;
           }   
    } 
        return escolhida; 
}
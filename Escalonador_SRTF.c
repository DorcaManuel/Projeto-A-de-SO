#include <stdio.h>
#include <stdlib.h>
//A função recebe como entrada a fila de tarefas com as informações na struct TCB (Fila)
tarefa* escalonador_SRTF (Fila *A, int *tempo_restante) {
    tarefa *escolhida = A->inicio; //recebe a primeira da fila.
    tarefa *varredor = A->inicio->proximo;//Inicia um 'varredor' para percorrer o restante da fila de tarefas prontas.
    while (varredor != NULL){  //Percorre toda as tarefas da fila para encontrar a tarefa com o menor tempo restante.
        if (tempo_restante[varredor->id] < tempo_restante[escolhida->id]){
            escolhida = varredor;
        }
        varredor = varredor->proximo; //Avança para a próxima tarefa na fila de tarefas prontas.
    }
    tempo_restante[escolhida->id]--;  
    return escolhida;
}















    



#include <stdio.h>
void batalha (){
    int turnos = 3;
    for (int i = 1; i <= turnos; i++)
    {
        printf("Turno %d batalhando...\n", i);
        printf("Guerreiro ataca!\n");
    }
    printf ("Fim da batalha, guerreiro venceu!");
}
int main (){
    batalha ();
    return 0;
}
#include <iostream>

char habilidade(){
    char usarhabilidade = 's';
    while (usarhabilidade =='s'){
        printf ("Você deseja usar Zero absoluto?\n");
        scanf ("%s", &usarhabilidade);
        printf ("Você usou Zero absoluto!\n");
    }
    printf ("Você derotou o vilão!\n");
    return usarhabilidade;
}
int main(){
    habilidade();
    return 0;
}
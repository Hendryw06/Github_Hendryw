#include <stdio.h>
#include  <stdbool.h> // Incluindo a biblioteca para usar o tipo bool
bool fogo (){
    bool churrasqueiraeletrica = true;
    while (churrasqueiraeletrica == true){
        printf("TC! pegando fogo bicho!!");
        churrasqueiraeletrica = false;
    }
}
int main(){
    fogo();
    return 0;
}
#include <stdio.h>

char energia(){
    char usarenergia = 's';
    while (usarenergia =='s'){
        printf ("Você deseja usar toda a sua energia?\n");
        scanf ("%s", &usarenergia);
        printf ("Você usou toda a sua energia!\n");
    }
    printf ("Você recuperou toda a sua vida!\n");
    return usarenergia;
}
int main(){
    energia();
    return 0;
} 
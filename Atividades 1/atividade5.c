# include <stdio.h>
int main(){
    int loop;
    int a = 5;
    int b = 6;
    int soma = a + b;
    
    for (loop = 0; loop <= 45; loop++) {
        if (soma >= 3) {
            printf("%d\n",loop);
        };
    };
    return 0;
}
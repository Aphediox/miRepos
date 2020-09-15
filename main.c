#include <stdio.h>

void saludo(char[]);
int main(){
    char nombre [50];
    printf("Nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    saludo(nombre);
    return 0;
}
void saludo(char nombre[]){
    
    printf("Hola %s", nombre);
}
#include <stdio.h>

/*int main (){
    int numero1, numero2;

    numero1 = 10;
    numero2 = 50;
    
if (numero1 >= numero2) {
    //bloco de código a ser executado se a condição for verdadeira.
    printf("O número 1 é maior ou igual ao número 2.\n");
}else {
    // Bloco de código a ser executado se a condição for falsa.
    printf("O número 1 é menor que o número 2.\n");
}



}*/
/*int main (){

    int numero = 11;

    if (numero % 2 ==0) {
        printf("O número é par.\n");
    } else {
         printf("O número é ímpar.\n");
    }
}*/
int main () {

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("A temperatura está alta!! \n");
    } else{
        printf("A temperatura está dentro dos parâmetros. \n");
    }
   
    if (umidade > 50){
        printf("A umidade está elevada!! \n");
    } else{
        printf("A umidade está dentro dos parâmetros. \n");
    }
   
    if (estoque < estoqueMinimo){
        printf("O estoque está abaixo do mínimo!! \n");
    } else {
        printf("Estoque normal! \n");
    }
    

}
    

/**************************************************************************************************
 *                                                                                                *
 *  38 - Leia o salário de um funcionário.Calcule e imprima o valor do novo salário, sabendo      *
 *       que ele recebeu um aumento de 25%.                                                       *
 *  by:                                                                                           *
 *     @@@@@ @  @ @      @   @@@@@ @@    @ @@@@@@    @@@@@@  @    @ @@    @ @@@@@@@ @@@@@ @@@@@   *
 *     @     @  @ @     @@   @   @ @ @   @ @    @    @       @    @ @ @   @    @    @   @ @       *
 *     @@@   @@@@ @@@@   @   @@@@@ @  @  @ @    @    @@@@@@  @@@@@@ @  @  @    @    @   @ @@@@@   *
 *     @        @ @  @   @   @   @ @   @ @ @    @         @       @ @   @ @    @    @   @     @   *
 *     @        @ @  @   @   @   @ @    @@ @    @         @       @ @    @@    @    @   @     @   *
 *     @        @ @@@@ @@@@@ @   @ @     @ @@@@@@    @@@@@@       @ @     @    @    @@@@@ @@@@@   *
 *                                                                                                *
 *  Data: 05/10/2020                                                                              *
 *                                                                                                *
 **************************************************************************************************/
#include<stdio.h>
#include<math.h>

int main(){

    float salario, novo_salario;
    float aumento;


    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este programa lê o salário de um funcionário, calcula e retorna o valor do salário com aumento de 25% >>>>>>\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("\nDigite o salário do funcionário:");
    scanf("%f", &salario);

    aumento = salario*0.25;
    novo_salario = salario + aumento;

    printf("O volor do produto com desconto é:  \"%.2f\"\n",novo_salario );
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}

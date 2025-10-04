/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>  //Cabecalho de entrada/saida padrao
#include <math.h>   // Biblioteca de matematica

int main()  //Inicia execucao do programa
{   
    int menu, a1, b1, a2, b2, c2;  //Varaiaveis inteiras dos coeficientes das equacoes
    
    float raiz1, raiz2;  //Variaveis decimais das raizes das equacoes

    
    while(1){  //Loop infinito para menu principal
    
    printf("\n=== MENU PRICIPAL === \n");  //Prints das opcoes de menu
    printf("1 - Resolver equacao do primeiro grau \n");
    printf("2 - Resolver equacao do segundo grau \n");
    printf("3 - Sobre o programa \n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao:");
    scanf("%d", &menu);  //Le a opcao escolhida
    
    switch(menu){  //Troca os casos conforme a opcao escolhida
        case 1:   //Selecao da equacao de primeiro grau
            printf("\n=== Resolucao passo a passo da equacao do primeiro grau === \n");
            printf("Forma: ax + b = 0 \n");
            printf("Digite o valor de a:");
            scanf("%d", &a1);  //le o coeficiente a
            
                if(a1 == 0){ //Condiciconal para a nulo
                    printf("Valor ivalido, a deve ser nao nulo. Tente novamente!\n");
                    break;  //Volta ao menu inicial
                }
            printf("Digite o valor de b:");
            scanf("%d", &b1);  //le o coeficiente b
            
            if(b1 < 0){  //Condicional para verificar se o b e negativo
                b1 = b1 * -1;
                
                raiz1 = (float)  b1 / a1;  //Atribui o valor da solucao da equacao para a variavel raiz1 
                
                printf("\nEquacao informada: %dx - %d = 0 \n", a1, b1);  //Imprime a forma geral da equacao
                
                printf("\nPassos:\n");  //Explica passso a passso a como encontrar o x
                printf("1) Escreva a equacao: (%d)x + (-%d) = 0\n", a1, b1);
                printf("2) Isolar o termo com x: (%d)x = -(-%d)\n", a1, b1);
                printf("   ou: %dx = %d\n", a1, b1);
                printf("3) Dividir ambos os lados por a: x = (%d) / (%d)\n", b1, a1);
                printf("4) Calculo: x = %.2f\n", raiz1);
            
                printf("\nSolucao: x = %.2f\n", raiz1);  //Imprime a solucao da equacao
            
                break;  //Retorna o menu principal
            
                
            }
            
            
            raiz1 = (float) - b1 / a1;  //Atribui o valor da solucao da equacao para a variavel raiz1
            
            printf("\nEquacao informada: %dx + %d = 0 \n", a1, b1);  //Imprime a forma geral da equacao
            
            printf("\nPassos:\n");  //Explica passso a passso a como encontrar o x
            printf("1) Escreva a equacao: (%d)x + (%d) = 0\n", a1, b1);
            printf("2) Isolar o termo com x: (%d)x = -(%d)\n", a1, b1);
            printf("3) Dividir ambos os lados por a: x = -(%d) / (%d)\n", b1, a1);
            printf("4) Calculo: x = %.2f\n", raiz1);
            
            printf("\nSolucao: x = %.2f\n", raiz1);  //Imprime a solucao da equacao
            
            break;  //Retorna o menu principal
            
        case 2:  //Selecao da equacao de segundo grau
            printf("\n=== Resolucao passo a passo da equacao do segundo grau === \n");
            printf("Forma: ax^2 + bx + c = 0 \n");
            printf("Digite o valor de a:");
            scanf("%d", &a2);  //le o coeficinte a
            
             if(a2 == 0){  //Condicional para a nulo
                    printf("Valor ivalido, a deve ser nao nulo. Tente novamente!\n");
                    break;  //Volta para o menu inicial
                }
            printf("Digite o valor de b:");
            scanf("%d", &b2);  //le o coeficinte b
            printf("Digite o valor de c:");
            scanf("%d", &c2);  //le o coeficiente c
            
            printf("\nEquacao informada: %dx^2 + %dx + %d = 0 \n", a2, b2, c2);  //Imprime a forma geral da equacao
            
            printf("\nPassos:\n");  //Explica o passo a passo a como encontrar as raizes da equacao
            printf("1) Calcular o discriminante: Delta = b^2 - 4 * a * c\n");
            printf("   - b^2 = (%d)^2 = %d\n", b2, b2 * b2);
            printf("   - 4 * a * c = - 4 * (%d) * (%d) = %d\n", a2, c2,- 4 * a2 * c2);
            printf("   -> Delta = %d - %d = %d\n", b2 * b2, 4 * a2 * c2, b2 * b2 - 4 * a2 * c2);
            
                if(b2 * b2 - 4 * a2 * c2 < 0){  //Condicional para verificar se o Delta e negativo
                    printf("\nComo o Delta e menor que zero, nao existem raizes reais para a equacao informada.\n");
                    break;  //Retorna ao menu inicial
                }
                
                if(b2 * b2 - 4 * a2 * c2 == 0){  //Condicional para verificar se o Delta e igual a zero
                    
                    raiz1 = (float) - b2 / (2 * a2);  //Atribui a solucao da equacao a variavel raiz1 
                
                    printf("\n 2) Como o Delta e igual a zero, existe apenas uma raiz real para a equacao informada\n");
                    printf("Calculo de x:\n x = -b / 2a\n");   //Passo a passo da resolucao
                    printf("x = - (%d) / 2 * %d = %.2f\n", b2, a2, raiz1);
                    printf("\nSolucao real: x = %.2f\n", raiz1);
                    break;  //Retorna o menu principal
                }
            
            printf("\n2) Como Delta > 0, existem duas raizes reais.\n");  //Calculo do Delta
            printf("   - sqrt(Delta) = sqrt(%d) = %.f\n", b2 * b2 - 4 * a2 * c2, sqrt(b2 * b2 - 4 * a2 * c2));
            printf("   - Denominador 2a = 2 * (%d) = %d\n", a2, 2 * a2);
                
            
            raiz1 = (float) (-b2 + sqrt(b2 * b2 - 4 * a2 * c2)) /( 2 * a2);  //Atribui o valor de x1 para varisvel raiz1
            printf("\n3) Calculo de x1:\n");  //Passo a passo para o calculo de x1
            printf("   x1 = ( - b + sqrt(Delta)) / 2a\n");
            printf("      = - %d + %.f / %d\n", b2, sqrt(b2 * b2 - 4 * a2 * c2), 2 * a2);
            printf("      = %.f / %d = %.2f\n", - b2 + sqrt(b2 * b2 - 4 * a2 * c2), 2 * a2, raiz1);
            
            
            raiz2 = (float) (-b2 - sqrt(b2 * b2 - 4 * a2 * c2)) / (2* a2);  //Atribui o valor de x2 para variavel raiz2
            printf("\n4) Calculo de x2:\n");  //Passo a passo para o calculo de x2
            printf("   x2 = ( - b - sqrt(Delta)) / 2a\n");
            printf("      = - %d - %.f / %d\n", b2, sqrt(b2 * b2 - 4 * a2 * c2), 2 * a2);
            printf("      = %.f / %d = %.2f\n", - b2 - sqrt(b2 * b2 - 4 * a2 * c2), 2 * a2, raiz2);
                    
            printf("\nSolucoes reais: x1 = %.2f ; x2 = %.2f\n", raiz1, raiz2);  //Imprime as solucoes reais da equacoes (x1 e x2)
            
            break;  //Retorna o menu principal
            
        case 3:  //Selecao sobre o programa
            printf("\nProgama desenvolvido por Savio Alves Queiroz \n");  //Imprime o responsavel pelo codigo
            
            break;  //Retorna o menu principal
            
        case 0:  //Selecao sair do programa
            printf("\nPrograma encerrado. \n");  //Programa encerrado
            
            return 0;
        
        default:  //Retorna ao menu inical se for digitado um valor diferente do menu principal
            printf("\nOpcao ivalida. \n");  //Mensagem de opcao invalida, volta ao menu inicial
            
            
        
    }    
    }
    return 0;
}














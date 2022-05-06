#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int senha = 1613;
    int digitos;
    int opcoes;
    float saque;
    int confcancelsaque;
    int confcanceldeposito;
    float deposito;
    float saldo = 100;


printf("Insira seu cartao");
_sleep(1000);
    
    for(int t = 5; t >=1; --t){
        printf("\n\t%d", t);
        _sleep(1000);
    }
        system("cls");

    printf("Cartao inserido... Por favor insira a senha de 4 digitos: ");
    scanf("%d", &digitos);

    if(digitos == senha ){
        printf("Senha certa !\n");
            printf("Carregando...");
            _sleep(1000);
            system("cls");
                inicio:
                    printf("Escolha uma das opcoes: \n\t");
                    printf("1-Sacar\t\t2-Depositar\n\t3-Ver Saldo\t4-Transferencia\n\n Escolha uma opcao: ");
                    scanf("%d", &opcoes);
                    system("cls");
                

                    switch (opcoes)
                    {
                    case 1:
                        printf("<>Sacar<>\n");
                        printf("Digite o valor do saque: ");
                        scanf("%f", &saque);
                        printf("Carregando...");
                        
                        _sleep(1000);
                        system("cls");
                        printf("Valor do saque e R$%2.2f\n", saque);
                        printf("1-Confirmar\t2-Cancelar\n");
                        scanf("%d", &confcancelsaque);
                        printf("Carregando...");
                        
                        _sleep(1000);
                        system("cls");

                             if (confcancelsaque == 1){
                                    
                                        if (saldo > saque){
                                            saldo = saldo - saque;
                                            printf("Carregando...\n");
                                            _sleep(1000);
                                            system("cls");
                                            printf("Retire seu dinheiro no local abaixo\n\tVVVVV");                                            
                                            break;
                                        }
                                        
                                        if (saldo < saque) {
                                            printf("Saldo insuficiente para o saque");
                                        }
                                        }else {
                                            goto inicio;
                                        }
                                         break; // ok
                                      
               iniciodeposito:
                    case 2:
                    
                        printf("<>Deposito<>\n");
                        printf("Digite o valor que voce quer depositar: ");
                        scanf("%f", &deposito);
                        printf("Valor do deposito e R$%2.2f\n", deposito);
                        printf("1-Confirmar\t2-Cancelar\n");
                        scanf("%d", &confcanceldeposito);

                            if(confcanceldeposito == 1){
                                saldo = saldo + deposito;
                                printf("Carregando...\n");
                                _sleep(1000);
                                printf("<Valor depositado>");
                            }if(confcanceldeposito == 2){
                                printf("Voltando para o menu de deposito...");
                                _sleep(1000);
                                system("cls");
                                goto iniciodeposito;
                            }

                        break;
                    
                    case 3:
                        printf("<>Ver Saldo<>\n");

                        break;
                    default:
                        break;
                    }
    } else{
        printf("SENHA INCORRETA. POR FAVOR VERIFIQUE SE A SENHA ESTA CORRETA.");
    }

    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    int tipo;
    float quant, preco;
    setlocale(LC_ALL, "-");

    printf("Este programa calcula o preco que sera pago no combustivel\n"
           "\t\t1-Alcool (R$:1.7997)  /  2-Diesel (R$: 0.9798)  /  3-Gasolina (R$:2.1009) \n\n"
           "Que tipo de combustivel voce gostaria: ");
           scanf("%d", &tipo);

           if (tipo >3 || tipo<1){
               printf("Voce nao escolheu uma opcao.");
                return 0;
           }
           printf("Quantos litros: ");
           scanf("%f", &quant);


            if (tipo==1)
            {
               preco=(quant*1.7997);
            }
           if (tipo==2)
           {
             preco=(quant*0.9798);
           }
           if (tipo==3)
           {
            preco=(quant*2.1009);
           }


    printf("O preco total e R$: %.2f", preco);
}

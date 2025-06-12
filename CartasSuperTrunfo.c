#include <stdio.h>
          int main(){
            //carta  01 super trunfo
            //Declarando variaveis da primeira carta 

            char estado01[3]; // ex A a H ou G01 ultilizando 2 caracter
            char codigo01[5]; // ultilizando 4 carater
            char nomecidade01[50]; // 49 caratcer deixando 1 
            int populacao01;
            float area01;
            float pib01;
            int pontosturisticos01;
            //variaveis da carta 01 declarada 

                //carta 02 super trunfo 
                //Declarando variaveis da primeira carta 

                char estado02[3];
                char codigo02[5];
                char nomecidade02[50];
                int populacao02;
                float area02;
                float pib02;
                int pontosturisticos02;
                //variaveis da carta 02 declarada 


                // entrada e saida de dados das cartas 01 e 02
                printf("\n****PREENCHA OS DADOS DA PRIMEIRA CARTA****\n");
                printf("ESTADO: ex A a H. \n");
                scanf("%s", estado01);
                printf("CODIGO: ex G01. \n");
                scanf("%s", codigo01);
                printf("NOME DA CIDADE: \n");
                scanf("%s", nomecidade01);
                printf("DIGITE A POPULAÇAO: \n");
                scanf("%d", &populacao01);
                printf("DIGITE A AREA EM KM²: \n");
                scanf("%f", &area01);
                printf("DIGITE O PIB: \n");
                scanf("%f", &pib01);
                printf("QUANTIDADE DE PONTOS TURISTICOS: \n");
                scanf("%d", &pontosturisticos01);

                // entrada e saida da carta 02

                printf("\n****PREENCHA OS DADOS DA SEGUNDA CARTA****\n");
                printf("ESTADO: ex A a H. \n");
                scanf("%s", estado02);
                printf("CODIGO: ex G01. \n");
                scanf("%s", codigo02);
                printf("NOME DA CIDADE: \n");
                scanf("%s", nomecidade02);
                printf("DIGITE A POPULAÇAO: \n");
                scanf("%d", &populacao02);
                printf("DIGITE A AREA EM KM²: \n");
                scanf("%f", &area02);
                printf("DIGITE O PIB: \n");
                scanf("%f", &pib02);
                printf("QUANTIDADE DE PONTOS TURISTICOS: \n");
                scanf("%d", &pontosturisticos02);
                // ENTRADA E SAIDA ULTILIZANDO PRINTF E SCANF 

                //exibiçao das cartas preenchida
                printf("ESTADO: %s \n", estado01);
                printf("CODIGO: %s \n", codigo01);
                printf("CIDADE: %s \n", nomecidade01);
                printf("POPULAÇAO: %d \n", populacao01);
                printf("AREA EM KM²: %.2f \n", area01);
                printf("PIB: %.2f \n", pib01);
                printf("PONTOS TURISTICOS: %d \n", pontosturisticos01);

                //exibicao da segunda carta preenchida
                printf("ESTADO: %s \n", estado02);
                printf("CODIGO: %s \n", codigo02);
                printf("CIDADE: %s \n", nomecidade02);
                printf("POPULAÇAO: %d \n", populacao02);
                printf("AREA EM KM²: %.2f \n", area02);
                printf("PIB: %.2f \n", pib02);
                printf("PONTOS TURISTICOS: %d \n", pontosturisticos02);



          return 0;      
          }
          #include <stdio.h> // biblioteca
          int main(){  //Carlos daniel

// variaveis da carta 01
            char estado01[3];  //strings 2 caracter 
            char codigo01[5];  // 4 caracter
            char nomecidae01[50]; //49 caracter sem espaço
            int populacao01;
            float area01;
            float pib01;
            int pontosturisticos01;
            float densidade01;
            float pib_per_capita01;
            


//variaveis da carta 02
                        char estado02[3]; // strings para 2 caracter
                        char codigo02[5]; // para 4 caracter
                        char nomecidae02[50]; // para 49 caracter sem espaço
                        int populacao02;
                        float area02;
                        float pib02;
                        int pontosturisticos02;
                        float densidade02;
                        float pib_per_capita02;
                      
//PRINTF PARA SAIDA DE DAODS
//SCANF PARA ENTRADA DE DADOS

            printf("***************************************\n"); // printf para exibicao
            printf("PREENCHA OS DADOS DA CARTA 01 \n");
            printf("DIGITE O ESTADO ex G: \n");
            scanf("%s", estado01);                        // scanf para a entrada de dados 
            printf("DIGITE O CODIGO ex G01: \n");
            scanf("%s", codigo01);
            printf("DIGITE A CIDADE: \n");
            scanf("%s", nomecidae01);
            printf("DIGITE A POPULAÇAO: \n");
            scanf("%d", &populacao01);
            printf("DIGITE A AREA EM²: \n");
            scanf("%f", &area01);
            printf("DIGITE O PIB: \n");
            scanf("%f", &pib01);
            printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
            scanf("%d", &pontosturisticos01);

            printf("\n"); // para pular linha


            printf("***************************************\n");
            printf("PREENCHA OS DADOS DA CARTA 02 \n");
            printf("DIGITE O ESTADO ex G: \n");
            scanf("%s", estado02);
            printf("DIGITE O CODIGO ex G01: \n");
            scanf("%s", codigo02);
            printf("DIGITE A CIDADE: \n");
            scanf("%s", nomecidae02);
            printf("DIGITE A POPULAÇAO: \n");
            scanf("%d", &populacao02);
            printf("DIGITE A AREA EM²: \n");
            scanf("%f", &area02);
            printf("DIGITE O PIB: \n");
            scanf("%f", &pib02);
            printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
            scanf("%d", &pontosturisticos02);
            printf("\n********************************************\n"); //pular limha
// exibiçao e saida de dados com printf 

            densidade01=populacao01/area01; // divisao da carta 01 
            pib_per_capita01=pib01/populacao01;

            densidade02=populacao02/area02; // divisao da crta 02
            pib_per_capita02=pib02/populacao02;

            //EXIBIÇAO DE CARTAS 

            printf("DADOS DA CARTA 01 PREENCHIDO! \n"); //SAIDA DE DADOS COM PRINTF 
            printf("ESTADO: %s\n", estado01);
            printf("CODIGO: %s\n", codigo01);
            printf("CIDADE: %s\n", nomecidae01);
            printf("POPULAÇAO: %d\n", populacao01);
            printf("AREA: %.2f\n", area01);
            printf("PIB: %.2f\n", pib01);
            printf("PONTOS TURISTICOS: %d\n", pontosturisticos01);
            printf("DENSIDADE: %.2f\n", densidade01); // adicionado 
            printf("PIB PER CAPITA: %.2f\n", pib_per_capita01); //adicionado
          
            printf("\n********************\n"); // pular linha

            printf("DADOS DA CARTA 02 PREENCHIDO! \n");
            printf("ESTADO: %s\n", estado02);
            printf("CODIGO: %s\n", codigo02);
            printf("CIDADE: %s\n", nomecidae02);
            printf("POPULAÇAO: %d\n", populacao02);
            printf("AREA: %.2f\n", area02);
            printf("PIB: %.2f\n", pib02);
            printf("PONTOS TURISTICOS: %d\n", pontosturisticos02);
            printf("DENSIDADE: %.2f\n", densidade02);
            printf("PIB PER CAPITA: %.2f\n", pib_per_capita02);
            

            
            return 0;
            }
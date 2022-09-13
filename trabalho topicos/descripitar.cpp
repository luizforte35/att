
#include <cc50.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h> //use this library to use "atoi()"
    
    //CIFRA DE CESAR - CRIPTOGRAFIA
    // FORMULA: Ci = ( Pi + k ) % 26
    // Ci = igésimo caractere criptografado
    // P = Frase para criptografar (string inserida)
    // Pi = igésimo caractere referente a String
    
    int
    main(int argc, char *argv[])    //char * = string
    {
        int k = atoi(argv[1]);  // k é o valor que o humano inserir no argumento transformado em inteiro
    
        char A = 'A';   // Int A = 65
        char a = 'a';   // Int a = 97
    
        printf("Insira o texto para criptografar: \n");
        string p = GetString();
    
    //   === [Criptografando] ===
        for (int i = 0, n = strlen(p); i < n; i++)
        {
            if (p[i] == 32) {
                //ESPAÇO - FIX BUG
                printf("%c", p[i]);
    
            } else if (p[i] < 97) {
                //LETRA MAIUSCULA
                int Pi = p[i] - ( (int)A - 1 ); //transformando para inteiro e subtraindo 64 para deixar o A = 1 / B = 2 / C = 3
                int Ci = ( ( Pi + k ) % 26 ) + ( (int)A - 1 );  //adicionando 64 para voltar aos valores normais de char A = 65 / B = 66 / C = 67
                printf("%c", Ci);
    
            } else {
                //LETRA MINUSCULA
                int Pi = p[i] - ( (int)a - 1 ); //transformando para inteiro e subtraindo 64 para deixar o a = 1 / b = 2 / c = 3
                int Ci = ( ( Pi + k ) % 26 ) + ( (int)a - 1 );  //adicionando 96 para voltar aos valores normais de char A = 97 / B = 98 / C = 99
                printf("%c", Ci);
            }
        }
        printf("\n");
    
    return 0;
    }
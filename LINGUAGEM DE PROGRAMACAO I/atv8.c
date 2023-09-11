#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char texto[31];
    char palavra[7];

    printf("Digite um texto de no maximo 30 caracteres: \n ");
    fgets(texto, sizeof(texto),stdin);

    printf("Digite uma palavra de no maximo 6 caracteres: \n ");
    scanf("%6s", palavra);

    char *pos = strstr(texto, palavra); //strcmp to compair
    if (pos != NULL) {
        //toupper uppercase
        for (int i = 0; i < strlen(palavra); i++) {
            palavra[i] = toupper(palavra[i]);
        } 
    
                
        printf("Palavra encontrada! Texto com palavra maiuscula: %s\n", palavra);
    } else {
        //strlen to count 
        if (strlen(texto) >= 5) {
            memmove(texto, texto + 5, strlen(texto) - 4);
        } else {
            texto[0] = '\0';
        }
        //tolower lowercase
        for (int i = 0; i < strlen(texto); i++) {
            texto[i] = tolower(texto[i]);
        }
        printf("Palavra nao encontrada! Texto modificado: %s\n", texto);
    }

    return 0;
}
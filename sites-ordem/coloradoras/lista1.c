//2
#include <stdio.h>

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Digite uma cadeia de caracteres em minusculas: ");
    scanf("%[^\n]s", str);

    
    while (str[i] != '\0') {
        
        if (str[i] >= 'a' && str[i] <= 'z') {
            
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("A string em maiusculas e: %s\n", str);

    return 0;
}

//4
/* mova isto para compilar um a um. <-
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;
    printf("Digite uma string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        
        if (str[i] == '1') {
            count++;
        }
        i++;
    }

    printf("O numero de 1's na string e: %d\n", count);

    return 0;
}

//6 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    
    length = strlen(str);

    printf("A palavra de tras-para-frente e: ");
    
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
//8
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    printf("Digite uma string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
        i++;
    }

    printf("O numero de vogais na string e: %d\n", count);

    return 0;
}
//10
#include <stdio.h>

int main() {
    char str[100], l1, l2;
    int i = 0;

    printf("Digite a string: ");
    scanf("%[^\n]s", str);

    while (getchar() != '\n');

    printf("Digite a letra L1 que deseja substituir: ");
    scanf(" %c", &l1);

    printf("Digite a letra L2 para substituir: ");
    scanf(" %c", &l2);
    while (str[i] != '\0') {
        
        if (str[i] == l1) {
            str[i] = l2;
        }
        i++;
    }

    printf("A nova string e: %s\n", str);

    return 0;
}
//12
#include <stdio.h>
#include <string.h>

int countWord(char *phrase, char *word) {
    int count = 0;
    char *ptr = phrase;
    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr += strlen(word);
    }

    return count;
}

int main() {
    char phrase[200], word[50];
    char option;

    do {
        printf("Digite a frase: ");
        fgets(phrase, sizeof(phrase), stdin);
        phrase[strcspn(phrase, "\n")] = 0; // Remove the newline character

        printf("Digite a palavra para contar: ");
        scanf("%s", word);

        int occurrences = countWord(phrase, word);
        printf("A palavra '%s' ocorre %d vez(es) na frase.\n", word, occurrences);

        printf("Deseja reprocessar? (s/n): ");
        scanf(" %c", &option);
        
        while (getchar() != '\n');

    } while (option == 's' || option == 'S');

    return 0;
}
//14
#include <stdio.h>
#include <string.h>

// Function to print words in a phrase
void printWords(char *phrase) {
    char temp_phrase[200];
    strcpy(temp_phrase, phrase);

    char *token = strtok(temp_phrase, " ");

    printf("As palavras da frase sao:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}

int main() {
    char phrase[200];
    char option;
    do {
        printf("Digite uma frase: ");
        fgets(phrase, sizeof(phrase), stdin);
        phrase[strcspn(phrase, "\n")] = 0; // Remove the newline
        printWords(phrase);
        printf("Deseja reprocessar? (s/n): ");
        scanf(" %c", &option);
        while (getchar() != '\n');
    } while (option == 's' || option == 'S');

    return 0;
}
//16
#include <stdio.h>

int main() {
    char word[51]; // 50 letters + 1 for null terminator
    int i = 0;
    printf("Digite uma palavra (maximo de 50 letras): ");
    scanf("%s", word);
    while (word[i] != '\0') {
        word[i] = word[i] + 1;
        i++;
    }
    printf("A string resultante e: %s\n", word);
    return 0;
}
//18
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;

    printf("Digite a string para codificar (Caesar Cipher): ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 3;
            if (str[i] > 'Z') {
                str[i] = str[i] - 'Z' + 'A' - 1;
            }
        }

        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] + 3;

            if (str[i] > 'z') {
                str[i] = str[i] - 'z' + 'a' - 1;
            }
        }
        i++;
    }

    printf("A string codificada e: %s\n", str);

    return 0;
}
//20
#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) {
    int i, j;
    char temp[100];
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            temp[j] = str[i];
            j++;
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

int main() {
    char str[100];

    printf("Digite uma string com espacos: ");
    scanf("%[^\n]s", str);

    removeSpaces(str);

    printf("A string sem espacos e: %s\n", str);

    return 0;
}
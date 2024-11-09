#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char sub[100];
    int count = 0;
    char *temp;

    // Demande � l'utilisateur de saisir le mot
    printf("Entrez le mot : ");
    scanf("%s", word);

    // Demande � l'utilisateur de saisir la sous-cha�ne � chercher
    printf("Entrez occurence que vous voulez compte � compter : ");
    scanf("%s", sub);

    // Cherche la sous-cha�ne dans le mot
    temp = word;
    while ((temp = strstr(temp, sub)) != NULL) {
        count++;
        temp++; // D�place le pointeur pour chercher la prochaine occurrence
    }

    // Affiche le r�sultat
    printf("La sous-cha�ne '%s' appara�t %d fois dans le mot '%s'.\n", sub, count, word);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char sub[100];
    int count = 0;
    char *temp;

    // Demande à l'utilisateur de saisir le mot
    printf("Entrez le mot : ");
    scanf("%s", word);

    // Demande à l'utilisateur de saisir la sous-chaîne à chercher
    printf("Entrez occurence que vous voulez compte à compter : ");
    scanf("%s", sub);

    // Cherche la sous-chaîne dans le mot
    temp = word;
    while ((temp = strstr(temp, sub)) != NULL) {
        count++;
        temp++; // Déplace le pointeur pour chercher la prochaine occurrence
    }

    // Affiche le résultat
    printf("La sous-chaîne '%s' apparaît %d fois dans le mot '%s'.\n", sub, count, word);

    return 0;
}

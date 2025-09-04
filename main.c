#include <stdio.h>

int typeOfUtilisator() {
    int utl;
    printf("Who are you ?\n  (\n     1-Library manager.\n     2-Student\n   )\n");
    scanf("%d" , &utl);
    return 1;
}

int main() {
    typeOfUtilisator();
    return 0;
}
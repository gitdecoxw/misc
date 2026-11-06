#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];

    printf("What is your name? ");
    fflush(stdout);

    if (fgets(name, sizeof name, stdin) == NULL) {
        fprintf(stderr, "No name entered.\n");
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s!\n", name);
    return 0;
}

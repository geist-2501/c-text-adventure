#include <stdio.h>
#include <stdbool.h>
#include "../include/parsexec.h"

static char input[100] = "look around";

static bool getInput(void)
{
    printf("\n> ");
    return fgets(input, sizeof input, stdin) != NULL;
}

int main() {
    printf("You awake in a dark room...\n");
    while (parseAndExecute(input) && getInput());
    printf("\nYou give up and die!\n");
    return 0;
}

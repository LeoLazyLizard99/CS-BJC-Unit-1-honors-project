#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char* who[5] = {"glumbus", "dumbus", "rungus", "clungus", "a 2013 subaru impreza"};
char* does[5] = {"is killing", "is driving", "is cooking in", "is gumping", "is eating"};

int main() {
    printf("%s %s %s\n", who[rand()], does[rand()], who[(rand() + (rand() % 5)) % 5]);
    return 0;
}

int rand() {
    return time(NULL) % 5;
}

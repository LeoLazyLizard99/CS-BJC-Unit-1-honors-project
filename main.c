#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char* noun[5] = {"elephant", "pizza", "girl", "boy", "power supply"};
char* verb[5] = {"runs", "jumps", "sits down", "climbs", "is eating"};
char* adjective[5] = {"quick", "lazy", "happy", "sad", "angry"};
char* adverb[5] = {"quickly", "lazily", "happily", "sadly", "angrily"};
char* determiner[5] = {"the", "a", "one", "some", "any"};
char* preposition[5] = {"to", "from", "over", "under", "on"};

int main() {
    printf("%s %s %s %s %s\n", noun[rand()], verb[rand()], preposition[rand()], determiner[rand()], noun[rand()]);
    return 0;
}

int rand() {
    return time(NULL) % 5;
}

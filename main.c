#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    const int MIN = 0, MAX = 10;
    int n, i = 0, n1, count = 1;
    srand(time(NULL));
    n = rand() % (MIN - MAX + 1) + MIN;
    while (i < 1) {
        printf("indovina un numero compreso da 0 a 10: ");
        scanf("%d", &n1);
        // controllo range
        if (n1 < 0 || n1 > 10) {
            printf("%d non e' un numero valido riscrivi\n", n1);
        } else {
            // conferma numero
            if (n1 == n) {
                printf("tantativo (%d/3) \n", count);
                printf("\nHAI INDOVINATO");
                i = 1;
                count++;
            } else {
                // suggerimento all'utente
                printf("tantativo (%d/3) ", count);
                printf("non hai indovinato riprova\n");
                count++;
                if (n1 > n) {
                    printf("il numero e' minore \n");
                } else {
                    printf("il numero e' maggiore \n \n");
                }
                // tentativi massimi
                if (count > 3) {
                    printf("hai finito i tentativi il numero era: %d", n);
                    i = 1;
                }
            }
        }
    }
}


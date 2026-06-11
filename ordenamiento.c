#include <stdio.h>
#include <string.h>
#include "sorting.h"
#include "piratas.h"
#include "input.h"

int main() {
    int n;
    scanf("%d", &n);

    Pirate p[n];

    for(int i = 0; i < n; i++) {
        readWord(p[i].nombre, 101);
        scanf("%lld", &p[i].recompensa);
        scanf("%d", &p[i].edad);
        readWord(p[i].tripulacion, 101);
    }

    insertionSort(p, n, sizeof(Pirate), pirataComparator);

    for(int i = 0; i < n; i++) {
        printf("%s %lld %d %s\n",
               p[i].nombre,
               p[i].recompensa,
               p[i].edad,
               p[i].tripulacion);
    }

    return 0;
}

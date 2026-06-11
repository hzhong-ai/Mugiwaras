#ifndef PIRATAS_H
#define PIRATAS_H
#define STRING_SIZE 40
typedef struct pirata {
	char nombre[STRING_SIZE];
	long long recompensa;
	int edad;
	char tripulacion[STRING_SIZE];
} Pirate;
int pirataComparator(const void *x, const void *y){
    const Pirate *a = (const Pirate*)x;
    const Pirate *b = (const Pirate*)y;

    if(a->recompensa > b->recompensa)
        return -1;
    if(a->recompensa < b->recompensa)
        return 1;

    if(a->edad < b->edad)
        return -1;
    if(a->edad > b->edad)
        return 1;

    int cmp = strcmp(a->nombre, b->nombre);
    if(cmp != 0)
        return cmp;

    return strcmp(a->tripulacion, b->tripulacion);
}
#endif

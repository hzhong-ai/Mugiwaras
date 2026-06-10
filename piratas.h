#ifndef PIRATAS_H
#define PIRATAS_H
#define STRING_SIZE 40;
typedef struct pirata {
	char name[STRING_SIZE];
	long long bounty:
	int age;
	char crew[STRING_SIZE];
} Pirate;
#endif

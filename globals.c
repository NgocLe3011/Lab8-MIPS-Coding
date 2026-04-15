#include "header.h"

MIPS_Instruction Instruction_storage[MAX_SIZE];
int regFile[N_REG];
char Data_storage[MAX_SIZE];
unsigned int totalDataByte = 0;
labelType labelTab[MAX_LABEL];

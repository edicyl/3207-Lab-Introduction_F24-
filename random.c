#include "random.h"
#include <stdlib.h>

char randchar()
{
    return (rand() % 26) + 'A';
}
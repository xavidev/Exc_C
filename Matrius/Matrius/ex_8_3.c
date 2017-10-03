#include <stdio.h>
#include <stdlib.h>

#define num_ciudades 6

int main() {

  int dist[num_ciudades][num_ciudades] =
    {{0, 100, 156,  98, 296, 409},
     {0,   0, 256, 198, 396, 509},
     {0,   0,   0,  91, 140, 319},
     {0,   0,   0,   0, 231, 311},
     {0,   0,   0,   0,   0, 181},
     {0,   0,   0,   0,   0,   0}};

  return 0;
}


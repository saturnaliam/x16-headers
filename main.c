#include <stdio.h>
#include "include/x16.h"

int main() {
  u16 i = 0;
  while (1) {
    i += 20;
    printf("%d\n", i);
  }
  return 0;
}

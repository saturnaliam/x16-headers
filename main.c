#include <stdio.h>
#include "include/x16.h"

unsigned char keycode;
int main() {
  while (1) {
    get_key(keycode);

    if (keycode) {
      printf("%u\n", keycode);
    }
  }
  return 0;
}

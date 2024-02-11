#include <stdio.h>
#include "include/x16.h"

int main() {
  printf("%cred\n%cgreen\n%cblue\n%corange\n%cblack\n%cbrown\n%cpink\n%cdark grey\n%cgrey\n%clight green\n%clight blue\n%clight grey\n%cpurple\n%cyellow\n%ccyan", COLOR_RED, COLOR_GREEN, COLOR_BLUE, COLOR_ORANGE, COLOR_BLACK, COLOR_BROWN, COLOR_PINK, COLOR_DARK_GRAY, COLOR_GRAY, COLOR_LIGHT_GREEN, COLOR_LIGHT_BLUE, COLOR_LIGHT_GRAY, COLOR_PURPLE, COLOR_YELLOW, COLOR_CYAN);

  return 0;
}

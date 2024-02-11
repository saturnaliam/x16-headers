#include <stdio.h>
#include "include/x16.h"

int main() {
  printf("%cred\n%cgreen\n%cblue\n%corange\n%cblack\n%cbrown\n%cpink\n%cdark grey\n%cgrey\n%clight green\n%clight blue\n%clight grey\n%cpurple\n%cyellow\n%ccyan", X16_COLOR_RED, X16_COLOR_GREEN, X16_COLOR_BLUE, X16_COLOR_ORANGE, X16_COLOR_BLACK, X16_COLOR_BROWN, X16_COLOR_PINK, X16_COLOR_DARK_GRAY, X16_COLOR_GRAY, X16_COLOR_LIGHT_GREEN, X16_COLOR_LIGHT_BLUE, X16_COLOR_LIGHT_GRAY, X16_COLOR_PURPLE, X16_COLOR_YELLOW, X16_COLOR_CYAN);

  return 0;
}

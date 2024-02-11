#include <stdio.h>
#include "include/x16.h"

void colors_test();

int main() {
  printf("%c", X16_CLEAR);

  colors_test();
  return 0;
}

void colors_test() {
  printf("%cRed\n", X16_COLOR_RED);
  printf("%cGreen\n", X16_COLOR_GREEN);
  printf("%cBlue\n", X16_COLOR_BLUE);
  printf("%cOrange\n", X16_COLOR_ORANGE);
  printf("%cBlack\n", X16_COLOR_BLACK);
  printf("%cBrown\n", X16_COLOR_BROWN);
  printf("%cPink\n", X16_COLOR_PINK);
  printf("%cDark Gray\n", X16_COLOR_DARK_GRAY);
  printf("%cGray\n", X16_COLOR_GRAY);
  printf("%cLight Green\n", X16_COLOR_LIGHT_GREEN);
  printf("%cLight Blue\n", X16_COLOR_LIGHT_BLUE);
  printf("%cLight Gray\n", X16_COLOR_LIGHT_GRAY);
  printf("%cPurple\n", X16_COLOR_PURPLE);
  printf("%cYellow\n", X16_COLOR_YELLOW);
  printf("%cCyan\n", X16_COLOR_CYAN);
}

#include <stdio.h>

int doStuff(int arg1, int arg2) {
  int x = 1;
  int y = 2;
  int z = 3;

  printf("In doStuff.  x = %d, y = %d, z = %d, arg1 = %d, arg2 = %d\n", x, y, z, arg1, arg2);

  return 100 * arg1 + arg2;
}

int main() {
  int x = 5;
  int y = 10;
  int z;

  z = doStuff(x, y);

  printf("In main.  x = %d, y = %d, z = %d\n", x, y, z);

  return 0;
}

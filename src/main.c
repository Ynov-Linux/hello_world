#include <stdio.h>
#include "version.h"

//
// main is where all program execution starts
//
int main(int argc, char **argv)
{
  printf("Hello world from version %s.\n", get_version());
  return 0;
}

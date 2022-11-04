#include <stdio.h>
#include "version.h"
#include "world.h"

//
// main is where all program execution starts
//
int main(int argc, char **argv)
{
  printf("Hello world from version %s.\n", get_version());

  set_world("Hello World");

  printf("%s from library", get_world());
  return 0;
}

#include<stdio.h>
#include<string.h>

#include "world.h"


char g_world[50];

void set_world(char *p_name)
{
    memcpy(g_world, p_name, strlen(p_name) + 1);
}

char *get_world()
{
    return g_world;
}

#include "command.h"
#include <stdio.h>

void command1(void)
{
    printf("Hello from command 1\n");
}

DEFINE_COMMAND("COMMAND1", command1);

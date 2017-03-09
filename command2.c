#include "command.h"
#include <stdio.h>

void command2(void)
{
    printf("Hello from command 2\n");
}

DEFINE_COMMAND("COMMAND2", command2);

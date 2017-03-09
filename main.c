#include "command.h"

#include <stdio.h>

int main(void)
{
    command_t *cmd = NULL;

    command_foreach(cmd)
    {
        printf("%s\n", cmd->command_name);
        cmd->command_callback();
    }

    return 0;
}

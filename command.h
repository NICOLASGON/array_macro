#ifndef __COMMAND_H__
#define __COMMAND_H__

typedef void (*callback_t)(void);

typedef struct {
    char * command_name;
    callback_t command_callback;
} command_t;

#define DEFINE_COMMAND(name, callback)          \
    static command_t command_name               \
    __attribute((used, section("command"))) = { \
        .command_name = name,                   \
        .command_callback = callback            \
    }

 #define command_foreach(cmd)                                 \
     for (command_t *cmd =                                    \
            ({                                                \
                extern command_t __start_command;             \
                &__start_command;                             \
            });                                               \
            cmd !=                                            \
            ({                                                \
                extern command_t __stop_command;              \
                &__stop_command;                              \
            });                                               \
            ++cmd)

#endif

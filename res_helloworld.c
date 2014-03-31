#include "asterisk.h"

ASTERISK_FILE_VERSION(__FILE__, "$Revision: $")

#include "asterisk/module.h"
#include "asterisk/logger.h"

#define AST_MODULE "hello"

extern int load_module();
extern int reload_module();
extern int unload_module();


AST_MODULE_INFO(ASTERISK_GPL_KEY, AST_MODFLAG_DEFAULT, "Hello World Stuff",
    .load = load_module,
    .unload = unload_module,
    .reload = reload_module,
    );

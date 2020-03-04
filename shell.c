#include "parser/ast.h"
#include "shell.h"

void initialize(void)
{
    /* This code will be called once at startup */
    if (prompt)
        prompt = "vush$ ";
}

void run_command(node_t *node)
{
    /* For testing: */
    print_tree(node);

    if (prompt)
        prompt = "vush$ ";
}

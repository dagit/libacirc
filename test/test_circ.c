#include <acirc.h>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    acirc *c;
    bool result;

    acirc_verbose(true);
    c = acirc_from_file("test_circ.acirc");
    if (c == NULL)
        return 1;

    result = acirc_ensure(c);
    acirc_clear(c);
    free(c);
    return !result;
}

#include "include/my.h"
#include "include/my_printf.h"

int main(void)
{
    printf("%s\n", "asdf");
    my_printf("%s\n", "asdf");
    printf("%d\n", 123);
    my_printf("%d\n", 123);
    printf("%o\n", 0765);
    my_printf("%o %%\n", 0765);
}

#include "ex22.h"
#include "dbg.h"

/*
$   cc  -Wall   -g  -DNDEBUG            -c  -o  ex22.o  ex22.c 
$    cc  -Wall   -g  -DNDEBUG                ex22_main.c ex22.o          -o  ex22_main 
*/

const char *MY_NAME = "Zed A. Shaw";

void scope_demo(int count)
{
    log_info("count is: %d", count);

    if(count > 10) {
        int count = 100;  //BAD! BUSS!

        log_info("count in this scope is %d", count);
    }
    log_info("count is at exit: %d", count);

    count = 3000;

    log_info("count after assign: %d", count);
}

int main(int argc, char *argv[])
{
    //
    log_info("My name: %s, age: %d", MY_NAME, get_age());

    set_age(100);

    log_info("My age is now: %d", get_age());

    //
    log_info("THE_SIZE is: %d", THE_SIZE);
    print_size();

    //
    log_info("Ratio at first: %f", update_ratio(2.0));
    log_info("Ratio again: %f", update_ratio(10.0));
    log_info("Ratio once more: %f", update_ratio(300.0));

    //
    int count = 4;
    scope_demo(count);
    scope_demo(count * 20);

    log_info("count after calling scope_demo: %d", count);
    return 0;
}
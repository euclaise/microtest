#include <stdio.h>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define BOLD "\033[1m"
#define YELLOW "\033[33m"
#define PURPLE "\033[35m"
#define L "\033[2m"
#define N "\033[0m"


void _assert(
        const char * name,
        int subtest, const
        char * expr,
        const char * file,
        int line,
        int t)
{
    if (t) printf(GREEN "PASS: " N
                  "[%d] %-10s" 
                  L PURPLE "   %-36s "
                  YELLOW "// %s:%d" N "\n",
                  subtest, name, expr, file, line);
    else
        printf(BOLD RED "FAIL: " N
               BOLD "[%d] %-10s"
               L PURPLE "   %-36s "
               YELLOW "// %s:%d" N "\n",
               subtest, name, expr, file, line);
}


#include "test_example.h"
int main()
{
    test_example();
}

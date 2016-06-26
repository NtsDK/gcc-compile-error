#include "minunit.h"
#include <call1.h>
#include <math.h>

#define EQ(X,Y,N) (round((X) * pow(10, N)) == round((Y) * pow(10, N)))

char *call1_test()
{
    mu_assert(EQ(call1Sqrt(25.0), 5.0, 3), "sqrt is not valid");
    
    return NULL;
}

char *all_tests()
{
    mu_suite_start();

    mu_run_test(call1_test);

    return NULL;
}

RUN_TESTS(all_tests);

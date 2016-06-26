#include "minunit.h"
#include <call2.h>
#include <call1.h>

#define EQ(X,Y,N) (round((X) * pow(10, N)) == round((Y) * pow(10, N)))

char *call2_test()
{
    mu_assert(EQ(call2Sqrt(call1Sqrt, 25.0), 5.0, 3), "sqrt is not valid");
    
    printf("%f", call2Sqrt(call1Sqrt, 25.0));
    
    return NULL;
}

char *all_tests()
{
    mu_suite_start();

    mu_run_test(call2_test);

    return NULL;
}

RUN_TESTS(all_tests);

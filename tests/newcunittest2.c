/*
 * File:   newcunittest2.c
 * Author: carlos
 *
 * Created on 5 sep. 2021, 14:30:03
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../matriz_p.h"

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testTrans() {
   char pa[]="Peliculas2.csv";
    int result = trans(pa);
     CU_ASSERT(result);
        CU_ASSERT(result==354);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest2", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testTrans", testTrans))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}

/*
 * File:   multi.c
 * Author: carlos
 *
 * Created on 6 sep. 2021, 13:17:30
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

void testMulti() {
   int numeros[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};;
    int f1=3;
    int c1=4;
    int numeros2[4][3] = {-3, 8, 4, 4, 1, 1, 5, 0, -3, 6, -9, 6};;
    int f2=4;
    int c2=3;
    int* result = multi(numeros, f1, c1, numeros2, f2, c2);
    CU_ASSERT_PTR_NOT_NULL(result);
    CU_ASSERT(*(result+0*3+0)==44);
    CU_ASSERT(*(result+0*3+1)==-26);
     CU_ASSERT(*(result+0*3+2)==21);
     CU_ASSERT(*(result+1*3+0)==92);
     CU_ASSERT(*(result+1*3+1)==-26);
     CU_ASSERT(*(result+2*3+0)==140);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("multi", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testMulti", testMulti))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}

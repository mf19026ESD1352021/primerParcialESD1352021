/*
 * File:   matriz_int.c
 * Author: carlos
 *
 * Created on 6 sep. 2021, 16:42:07
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

void testMatrizNu() {
    char pa[]="Peliculas2.csv";
    char p2[]="Peliculas2s.csv";
    int* result = matrizNu(pa);
    CU_ASSERT_PTR_NOT_NULL(result);
    CU_ASSERT(*result==0);
    CU_ASSERT(*(result+0*6+1)==1);
    CU_ASSERT(*(result+0*+6+5)==0);
    CU_ASSERT(*(result+58*6+0)==1);
    CU_ASSERT(*(result+58*6+5)==0);
    int* resulta = matrizNu(p2);
    CU_ASSERT_PTR_NULL(resulta);
     CU_ASSERT_TRUE(resulta==0);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("matriz_int", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testMatrizNu", testMatrizNu))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}

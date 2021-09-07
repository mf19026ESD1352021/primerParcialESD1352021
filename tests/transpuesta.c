/*
 * File:   transpuesta.c
 * Author: carlos
 *
 * Created on 6 sep. 2021, 12:40:06
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
    int numeros[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int filas=3;
    int columnas=4;
    int* result = trans(&numeros, filas, columnas);
   
        CU_ASSERT(*(result+0*filas+2)==9);
        CU_ASSERT_PTR_NOT_NULL(result);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("transpuesta", init_suite, clean_suite);
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

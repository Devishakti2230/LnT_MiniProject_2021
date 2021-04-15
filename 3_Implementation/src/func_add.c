#include<stdio.h>
#include "calculator_function.h"

/**
 * @brief add function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error add(calc_arthmetic n,result* answer)
{
    answer->final_answer=n.num_1+n.num_2;
    return SUCCESS;
}

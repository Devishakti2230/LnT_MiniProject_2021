#include<stdio.h>
#include "calculator_function.h"
#include<math.h>
#include<stdlib.h>

/**
 * @brief add function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check
 */

check add(calculator_arithmetic n,result* answer)
{
    answer->final_answer=n.number_1+n.number_2;
    return SUCCESS;
}

/**
 * @brief sub function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check 
 */

check sub(calculator_arithmetic n,result* answer)
{
    answer->final_answer=n.number_1-n.number_2;
    return SUCCESS;
}

/**
 * @brief mul function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check
 */

check mul(calculator_arithmetic n,result* answer)
{
    answer->final_answer=n.number_1*n.number_2;
    return SUCCESS;
}

/**
 * @brief div function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check
 */

check divv(calculator_arithmetic n,result* answer)
{
    if(n.number_1==0 || n.number_2==0)
    {
       
        return ERROR_DIV_ZERO;
    }
    else
    {
    answer->final_answer=n.number_1/n.number_2;
    return SUCCESS;
    }
}

/**
 * @brief modd function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check 
 */

check modd(calculator_arithmetic_1 n,result_1* answer)
{
    answer->final_answer=n.number_1%n.number_2;
    return SUCCESS;
}

/**
 * @brief power function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check 
 */
check power(calculator_arithmetic n,result* answer)
{
    answer->final_answer=pow(n.number_1,n.number_2);
    return SUCCESS;
}

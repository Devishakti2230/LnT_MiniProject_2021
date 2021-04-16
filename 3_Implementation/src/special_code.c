#include<stdio.h>
#include "calculator_function.h"
#include<math.h>
#include<stdlib.h>


/**
 * @brief sqrr function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check 
 */
check sqrr(calculator_special n,result* answer)
{
    answer->final_answer=n.number*n.number;
    return SUCCESS;
}

/**
 * @brief sqrtt function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check 
 */
check sqrtt(calculator_special n,result* answer)
{
    answer->final_answer=sqrt(n.number);
    return SUCCESS;
}

/**
 * @brief cubee function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check 
 */
check cubee(calculator_special n,result* answer)
{
    answer->final_answer=n.number*n.number*n.number;
    return SUCCESS;
}



/**
 * @brief cubert function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check 
 */
check cubert(calculator_special n,result* answer)
{
    answer->final_answer=cbrt(n.number);
    return SUCCESS;
}

/**
 * @brief logg function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check 
 */

check logg(calculator_special n,result* answer)
{
    answer->final_answer=log10(n.number);
    return SUCCESS;
}

/**
 * @brief factorial function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return check 
 */
check factorial(calculator_special_1 n,result_1* answer)
{
	int fact=1;
	printf("Please Enter an integer\n");
	if (n.number < 0)
        printf("Error! Factorial of a negative number doesn't exist. Please Enter a positive number");
    else {
        for (i = 1; i <= n.number; ++i) {
            fact *= i;
        }
    answer->final_answer=fact;
    return SUCCESS;
}

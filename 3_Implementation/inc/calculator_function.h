#ifndef __calculator_function_h__
#define __calculator_function_h__

typedef struct calculator_arithmetic
{
    /**
     * @brief structure for arthmetic operations
     * 
     */
    float number_1;
    float number_2;
} calculator_arithmetic;

typedef struct calculator_arithmetic_1
{
    /**
     * @brief structure for arthmetic operations
     * 
     */
    int number_1;
    int number_2;
} calculator_arithmetic_1;

typedef struct result
{
    /**
     * @brief structure for result
     * 
     */
    float final_answer;
    
}result;

typedef struct result_1
{
    /**
     * @brief structure for result
     * 
     */
    int final_answer;
    
}result_1;

typedef struct calculator_special
{
    /**
     * @brief strcture for calculating specific operations
     * 
     */
    float number;
}calculator_special;

typedef struct calculator_special_1
{
    /**
     * @brief strcture for calculating specific operations
     * 
     */
    int number;
}calculator_special_1;

typedef enum check
{
    /**
     * @brief Enum for unit testing the functions
     * 
     */
    SUCCESS=1,
    FAIL=0,
    ERROR_DIV_ZERO=-1
}check;

enum arthemetic_code
{
    /**
     * @brief Naming values to the variables
     * 
     */

    ADD=1,
    SUB=2,
    MUL=3,
    DIV=4,
    MOD=5,
    POW=6,
    EXIT=7
};

enum special_code
{
    /**
     * @brief Naming values to the variables
     * 
     */
    SQR=1,
    SQRT=2,
    CUB=3,
    CUBRT=4,
    LOG=5,
    FACT=6
};


void main_operation(void);
void arthmetic_operation(void);
void special_operation(void);
check add(calculator_arithmetic n,result* answer);
check sub(calculator_arithmetic n,result* answer);
check mul(calculator_arithmetic n,result* answer);
check divv(calculator_arithmetic n,result* answer);
check modd(calculator_arithmetic_1 n,result_1* answer);
check power(calculator_arithmetic n,result* answer);
check sqrr(calculator_special n,result* answer);
check sqrtt(calculator_special n,result* answer);
check cubee(calculator_special n,result* answer);
check cubert(calculator_special n,result* answer);
check logg(calculator_special n,result* answer);
check factorial(calculator_special_1 n,result_1* answer);
#endif

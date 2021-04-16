#include<stdio.h>
#include "calculator_function.h"
#include "unity.h"
#include<math.h>
#include<stdlib.h>

calculator_arithmetic value;
calculator_arithmetic_1 value_1;
static result ans={0};
static result_1 anss={0};
calculator_special values;
calculator_special_1 values_1;

void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_add(void)
{
    /**
     * @brief Requirement based test case for addition
     * 
     */
    value.number_1=200;
    value.number_2=100;
    add(value,&ans);
	TEST_ASSERT_EQUAL(300,ans.final_answer);

  /**
   * @brief scenario based test case for addition
   * 
   */
    value.number_1=20*2;
    value.number_2=-9+5;
    add(value,&ans);
    TEST_ASSERT_EQUAL(36,ans.final_answer);
   
   /**
   * @brief boundary based test case for addition
   * 
   */
    value.number_1=-99999;
    value.number_2= 99999;
    add(value,&ans);
    TEST_ASSERT_EQUAL(0,ans.final_answer);

}
void test_sub(void)
{
    /**
     * @brief Requirment based test case for substraction
     * 
     */
    value.number_1=15;
    value.number_2=5;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(10,ans.final_answer);


    /**
     * @brief Scenario based test case for substraction
     * 
     */
    value.number_1=15*82;
    value.number_2=-5+28;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(1207,ans.final_answer);

    /**
     * @brief Boundary based test case for substraction
     * 
     */
    value.number_1=88889;
    value.number_2=77778;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(11111,ans.final_answer);


}
void test_mul(void)
{
    /**
     * @brief Requirment Based test case for multiplication
     * 
     */
    value.number_1=159;
    value.number_2=286;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(45474,ans.final_answer);

    /**
     * @brief Scenario Based test case for multiplication
     * 
     */
    value.number_1=-15;
    value.number_2=-26;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(390,ans.final_answer);

    /**
     * @brief Boundary Based test case for multiplication
     * 
     */
    value.number_1=9999;
    value.number_2=6666;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(66653336,ans.final_answer);


}
void test_div(void)
{
    /**
     * @brief requirment based test case for divison
     * 
     */
    
    value.number_1=3888;
    value.number_2=24;
    divv(value,&ans);
	TEST_ASSERT_EQUAL(162,ans.final_answer);


    /**
     * @brief Boundary based test case for divison
     * 
     */
    
    value.number_1=9999;
    value.number_2=3;
    divv(value,&ans);
	TEST_ASSERT_EQUAL(3333,ans.final_answer);


}

void test_mod(void)
{
    /**
     * @brief requirment based test case for divison
     * 
     */
    
    value_1.number_1=3889;
    value_1.number_2=24;
    modd(value_1,&anss);
	TEST_ASSERT_EQUAL(1,anss.final_answer);


}

void test_pow(void)
{
    /**
     * @brief Requirment based
     * 
     */
    value.number_1=5;
    value.number_2=20;
    power(value,&ans);
    TEST_ASSERT_EQUAL(95367433551872,ans.final_answer);

    /**
     * @brief Scenario based
     * 
     */
    value.number_1=2*2;
    value.number_2=4;
    power(value,&ans);
    TEST_ASSERT_EQUAL(256,ans.final_answer);
}

void test_sqr(void)
{
	/**
     * @brief requirment based test case.
     * 
     */
     values.number=8;
     sqrr(values,&ans);
     TEST_ASSERT_EQUAL(64,ans.final_answer);
}

void test_sqrt(void)
{
    /**
     * @brief requirment based
     * 
     */
    values.number=24;
    sqrtt(values,&ans);
    TEST_ASSERT_EQUAL(4.90,ans.final_answer);
}

void test_cub(void)
{
	/**
     * @brief requirment based test case.
     * 
     */
     values.number=4;
     cubee(values,&ans);
     TEST_ASSERT_EQUAL(64,ans.final_answer);
}

void test_cubrt(void)
{
    /**
     * @brief requirment based
     * 
     */
    values.number=125;
    cubert(values,&ans);
    TEST_ASSERT_EQUAL(5,ans.final_answer);
}

void test_log(void)
{
    /**
     * @brief requirment based test case.
     * 
     */
     values.number=8869;
     logg(values,&ans);
     TEST_ASSERT_EQUAL(3.95,ans.final_answer);

}



void test_fact(void)
{
    /**
     * @brief requirment based
     * 
     */
    values_1.number=5;
    factorial(values_1,&anss);
    TEST_ASSERT_EQUAL(120,anss.final_answer);
  
   
}



int main()
{
	/**
	 * @brief Construct a new unity begin object
	 * 
	 */
     UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);
    RUN_TEST(test_mod);
    RUN_TEST(test_pow);
    RUN_TEST(test_sqr);
    RUN_TEST(test_sqrt);
    RUN_TEST(test_cub);
    RUN_TEST(test_cubrt);
    RUN_TEST(test_log);
    RUN_TEST(test_fact);
	return UNITY_END();
}

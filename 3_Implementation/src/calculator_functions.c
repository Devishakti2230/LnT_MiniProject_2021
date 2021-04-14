#include <calculator_functions.h>

int add(int operand1, int operand2)
{   
    int res = operand1 + operand2;
    if (operand1 > 0 && operand2 > 0 && res < 0) return -1;
    else if (operand1 < 0 && operand2 < 0 && res > 0) return -1;
    else return res;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    int mul = operand1 * operand2;
    if(operand1 ==0 || operand2==0)
        return mul;
    else if (operand1==mul/operand2)
        return mul;
    else 
        return -1;
    
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

double simple_interest(fin_opt* sim_opt){
    return (sim_opt->principal_amount * sim_opt->time_of_period * sim_opt->rate_of_interest)/100;
}


double fact(int operand1){
    int i,f=1;
    if (operand1<1)
    {
        return 1;
    }
    for(i=1;i<=operand1;i++){
    f=f*i;
    }
    if(f<__DBL_MAX__)
        return f;
    else 
        return -1;
}

double power(double operand1, double operand2){
    return pow(operand1,operand2);
}

double logarithm(double operand1){
    if(operand1<0) return -1;
    return log10(operand1);
}

double exponential(double operand1){
    if(operand1>1000 || operand1<-1000) 
        return -1;
    else
        return exp(operand1);
}

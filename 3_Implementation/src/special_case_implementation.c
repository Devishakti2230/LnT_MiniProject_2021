#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"calculator_function.h"



static result ans={0};
void special_operation()
{
    /**
     * @brief 
     * 
     */
    calculator_special value;
    int choice=-1;
    int local_value;
    printf("\n1. Square\n2. Square_root\n3. Cube\n4. Cube_root\n5. Logarithm,\n6. Factorial\n7. Exit\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=7)
    {
        /**
         * @brief Construct a new if object
         * 
         */
        if(choice==7)
        {
            exit(0);
        }
        printf("\nEnter the value\n");
        scanf("%d",&local_value);
        value.number=local_value;
        switch(choice)
        {
            case SQR:
            logg(value,&ans);
            printf("%.2f",ans.final_answer);
            break;

            case SQRT:
            power(valuee,&ans);
            printf("%.2f",ans.final_answer);
            break;
            
            case CUB:
            sqrtt(value,&ans);
            printf("%.2f",ans.final_answer);
			
	    case CUBRT:
            logg(value,&ans);
            printf("%.2f",ans.final_answer);
            break;

            case LOG:
            power(valuee,&ans);
            printf("%.2f",ans.final_answer);
            break;
            
            case FACT:
            sqrtt(value,&ans);
            printf("%.2f",ans.final_answer);

            default:
            exit(0);
        }
    }
    else
    {
        printf("\n Wrong choice, Try again\n");
    }

}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"calculator_function.h"



static result ans={0};
static result_1 anss={0};
void special_operation()
{
    /**
     * @brief 
     * 
     */
    calculator_special value;
    calculator_special_1 value_1;
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
	    
	else if(choice==1 || choice==2 || choice==3 || choice==4 || choice==5)
        {
             printf("\nEnter the  two value \n");
             scanf("%d",&local_value);
             value.number=local_value;
        }
        else if(choice==6)
        {
            
             printf("\nEnter the value \n");
             scanf("%d",&local_value);
             value_1.number=local_value;
        }   
	   
        switch(choice)
        {
            case SQR:
            sqrr(value,&ans);
            printf("%.2f",ans.final_answer);
            break;

            case SQRT:
            sqrtt(valuee,&ans);
            printf("%.2f",ans.final_answer);
            break;
            
            case CUB:
            cubee(value,&ans);
            printf("%.2f",ans.final_answer);
			
	    case CUBRT:
            cubert(value,&ans);
            printf("%.2f",ans.final_answer);
            break;

            case LOG:
            logg(valuee,&ans);
            printf("%.2f",ans.final_answer);
            break;
            
            case FACT:
            factorial(value_1,&anss);
            printf("%d",anss.final_answer);

            default:
            exit(0);
        }
    }
    else
    {
        printf("\n Wrong choice, Try again\n");
    }

}

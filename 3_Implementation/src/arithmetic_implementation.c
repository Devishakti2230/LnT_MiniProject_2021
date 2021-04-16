#include<stdio.h>
#include "calculator_function.h"
#include<math.h>
#include<stdlib.h>

static result ans={0};
void arthmetic_operation()
{
    /**
     * @brief arthmetic function to perfrom required  operations
     * 
     */
     calculator_arithmetic value;
    
    int choice=-1;
    int local_value1,local_value2;
    printf("\n1. Addition\n2. subtraction\n3. multiplication\n4. Divison\n5. Modulous\n6. Power\n7. Exit\n");
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
        printf("\nEnter two values\n");
        scanf("%d %d",&local_value1,&local_value2);
        value.number_1=local_value1;
        value.number_2=local_value2;
        switch(choice)
        {
            /**
             * @brief switch case for the performing required operation
             * 
             */
            case ADD:
            add(value,&ans);
            printf("\nThe Sum is : %.2f",ans.final_answer);
            printf("\n");
            break;
			
			case SUB:
            sub(value,&ans);
            printf("\nThe subtraction is: %.2f",ans.final_answer);
            printf("\n");
            break;

            case MUL:
            mul(value,&ans);
            printf("\nThe Multiplication is: %.2f",ans.final_answer);
            printf("\n");
            break;

            case DIV:
            divv(value,&ans);
            printf("\nThe Divison is: %.2f",ans.final_answer);
            printf("\n");
            break;
			
			case MOD:
            modd(value,&ans);
            printf("\nThe modulous is: %.2f",ans.final_answer);
            printf("\n");
            break;
			
		    case POW:
            power(value,&ans);
            printf("\nThe power result is: %.2f",ans.final_answer);
            printf("\n");
            break;

            case EXIT:
            printf("\nClosing the application...");
            exit(0);
            break;

            default:
            exit(0);

        }
    }
    else
    {
        printf("\n Wrong choice, Try again\n");
    }
    
}
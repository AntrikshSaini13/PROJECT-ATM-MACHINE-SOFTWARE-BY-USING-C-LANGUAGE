
// ****************************************************************************************************    ATM    *******************************************************************************************************

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int option,money,pin,newpin=1234,i=3;
    float total_amt = 500000.49;

    top:
    printf("Enter the passward\t[    ]\b\b\b\b\b");
    scanf("%d",&pin);
    
    if(pin == newpin){
        system("cls");
        med:
        printf("Select the language\n\nHindi   \t1\nEnglish   \t2\nTelgu   \t3\nSanskrat   \t4\n\n\t\t[ ]\b\b");scanf("%d",&option);

        if (option == 1){
            system("cls");
            printf("\nHINDI\n\n");
            start1:
            printf("Select the Correct Option\n\nWITHWROLL    \t\t1\nDEPOSIT     \t\t2\nCHECK BALANCE   \t3\nPASSWORD CHANGE   \t4\nExit\t\t\t5\n\n\t\t\t[ ]\b\b");scanf("%d",&option);

            // cash WITHWROL code 
            if(option == 1)
            {
                system("cls");
                printf("Enter the amount\t[        ]\b\b\b\b\b\b\b\b\b");scanf("%d",&money);
                system("cls");
                total_amt -= money;
                if(total_amt > 0){
                    printf("\nCollect Your Ammount Plz %d\n\n",money);
                
                    // carrancy count here

                    if (money / 500){printf("500 note - %d\n",money/500);}
                    money %= 500;
                    if (money / 200){printf("200 note - %d\n",money/200);}
                    money %= 200;
                    if (money / 100){printf("100 note - %d\n",money/100);}
                    money %= 100;
                    if (money / 50){printf("50 note - %d\n",money/50);}
                    money %= 50;
                    if (money / 20){printf("20 note - %d\n",money/20);}
                    money %= 20;
                    if (money / 10){printf("10 note - %d\n",money/10);}
                    money %= 10;
                    if (money / 5){printf("5 note - %d\n",money/5);}
                    money %= 5;
                    if (money / 2){printf("2 note - %d\n",money/2);}
                    money %= 2;
                    if (money / 1){printf("1 note - %d\n",money);}

                    if(total_amt){
                        printf("\nAvaliavle Balance is %.2f\n\n",total_amt);
                        printf("Select the options \n\nMore informations \t1\nFor Exist\t\t2\n\n\t\t\t[ ]\b\b");scanf("%d",&option);
                        if(option == 1)
                        {
                            goto start1;
                        }
                        else{
                            system("cls");
                            printf("\a\nThanku\n");
                            return 0;
                        }
                    }
                }
                else{
                    printf("\"\aInsufficient Balance\" \n\nPlc Check Your Balance Plz\n");
                }

            }

            // deposit money in account
            else if(option == 2)
            {
                system("cls");
                printf("Enter the Ammount which is Deposit in own Account\t[         ]\b\b\b\b\b\b\b\b\b\b");scanf("%d",&money);
                total_amt += money;
                if(total_amt){
                        printf("\nDeposit Money in own account %d\n",money);
                        printf("\nCurrent Balance is %.2f\n\n",total_amt);
                        printf("Select the options \n\nMore informations \t1\nFor Exist\t\t2\n\n\t\t\t[ ]\b\b");scanf("%d",&option);
                        if(option == 1)
                        {
                            goto start1;
                        }
                        else{
                            system("cls");
                            printf("\a\nThank You\n");
                            return 0;
                        }
                    }
            }
            // check blance
            else if(option == 3)
            {
                system("cls");
                printf("Your balance is \"%.2f\"\n\n",total_amt);
                if(total_amt){
                    // system("cls");
                    printf("Select the options \n\nMore informations \t1\nFor Exist\t\t2\n\n\t\t\t[ ]\b\b");scanf("%d",&option);
                    if(option == 1)
                    {
                        goto start1;
                    }
                    else{
                        system("cls");
                        printf("\a\nThank You\n");
                        return 0;
                    }
                }
            }
            //change passward code
            else if(option == 4)
            {
                system("cls");
                printf("Enter New Passward\n\n[    ]\b\b\b\b\b");scanf("%d",&newpin);
                system("cls");
                // printf("\nNew Passward  %d\n\n",newpin);
                goto top;
            }
            else{
                // system("cls");
                // printf("Enter the valid options plz\n");
                system("cls");
                printf("\a\"Invalid Option try Again\"\n\n");
                i--;
                if(i){
                    goto start1;
                }
                printf("Remove the card from ATM\n\tThank You\n");
                // goto start;
            }
        }
        else if (option == 2)
        {
            
            // printf("ENGLISH\n");
            system("cls");
            printf("\nENGLISH\n\n");
            start2:
            printf("Select the Correct Option\n\nWITHWROLL    \t\t1\nDEPOSIT     \t\t2\nCHECK BALANCE   \t3\nPASSWORD CHANGE   \t4\nExit\t\t\t5\n\n\t\t\t[ ]\b\b");scanf("%d",&option);

            // cash WITHWROL code 
            if(option == 1)
            {
                system("cls");
                printf("Enter the amount\t[        ]\b\b\b\b\b\b\b\b\b");scanf("%d",&money);
                system("cls");
                total_amt -= money;
                if(total_amt > 0){
                    printf("\nCollect Your Ammount Plz %d\n\n",money);
                
                    // carrancy count here

                    if (money / 500){printf("500 note - %d\n",money/500);}
                    money %= 500;
                    if (money / 200){printf("200 note - %d\n",money/200);}
                    money %= 200;
                    if (money / 100){printf("100 note - %d\n",money/100);}
                    money %= 100;
                    if (money / 50){printf("50 note - %d\n",money/50);}
                    money %= 50;
                    if (money / 20){printf("20 note - %d\n",money/20);}
                    money %= 20;
                    if (money / 10){printf("10 note - %d\n",money/10);}
                    money %= 10;
                    if (money / 5){printf("5 note - %d\n",money/5);}
                    money %= 5;
                    if (money / 2){printf("2 note - %d\n",money/2);}
                    money %= 2;
                    if (money / 1){printf("1 note - %d\n",money);}

                    if(total_amt){
                        printf("\nAvaliavle Balance is %.2f\n\n",total_amt);
                        printf("Select the options \n\nMore informations \t1\nFor Exist\t\t2\n\n\t\t\t[ ]\b\b");scanf("%d",&option);
                        if(option == 1)
                        {
                            goto start2;
                        }
                        else{
                            system("cls");
                            printf("\a\nThanku\n");
                            return 0;
                        }
                    }
                }
                else{
                    printf("\"\aInsufficient Balance\" \n\nPlc Check Your Balance Plz\n");
                }

            }

            // deposit money in account
            else if(option == 2)
            {
                system("cls");
                printf("Enter the Ammount which is Deposit in own Account\t[         ]\b\b\b\b\b\b\b\b\b\b");scanf("%d",&money);
                total_amt += money;
                if(total_amt){
                        printf("\nDeposit Money in own account %d\n",money);
                        printf("\nCurrent Balance is %.2f\n\n",total_amt);
                        printf("Select the options \n\nMore informations \t1\nFor Exist\t\t2\n\n\t\t\t[ ]\b\b");scanf("%d",&option);
                        if(option == 1)
                        {
                            goto start2;
                        }
                        else{
                            system("cls");
                            printf("\a\nThank You\n");
                            return 0;
                        }
                    }
            }
            // check blance
            else if(option == 3)
            {
                system("cls");
                printf("Your balance is \"%.2f\"\n\n",total_amt);
                if(total_amt){
                    // system("cls");
                    printf("Select the options \n\nMore informations \t1\nFor Exist\t\t2\n\n\t\t\t[ ]\b\b");scanf("%d",&option);
                    if(option == 1)
                    {
                        goto start2;
                    }
                    else{
                        system("cls");
                        printf("\a\nThank You\n");
                        return 0;
                    }
                }
            }
            //change passward code
            else if(option == 4)
            {
                system("cls");
                printf("Enter New Passward\n\n[    ]\b\b\b\b\b");scanf("%d",&newpin);
                system("cls");
                // printf("\nNew Passward  %d\n\n",newpin);
                goto top;
            }
            else{
                // system("cls");
                // printf("Enter the valid options plz\n");
                system("cls");
                printf("\a\"Invalid Option try Again\"\n\n");
                i--;
                if(i){
                    goto start2;
                }
                printf("Remove the card from ATM\n\tThank You\n");
                // goto start;
            }
        }
        else{
            system("cls");
            printf("\a\"Invalid Option try Again\"\n\n");
            i--;
            if(i){
                goto med;
            }
            printf("Remove the card from ATM\n\tThank You\n");
        }
    }
    else{
        system("cls");
        printf("\a\"Invalid Passard try Again\"\n\n");
        i--;
        if(i){
            goto top;
        }
        printf("Your card is block for 24 hrs\n\tThank You\n");
    }
    return 0;
}
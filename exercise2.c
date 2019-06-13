#include<stdio.h>
#include<math.h>
#include<string.h>
void main(){
    int worksheet1(){
        //worksheet1
        int num1, num2;
        printf("Enter first number: ");
        scanf("%d",&num1);
        printf("Enter second number: ");
        scanf("%d",&num2);
        if(num1 >= num2){
            printf("Larger number is : %d", num1);
        }else{
            printf("Larger number is : %d", num2);
        }
    }

    int worksheet2(){
        //worksheet2
        int num;
        printf("Enter a number: \n");
        scanf("%d",&num);
        if((num % 2) == 0){
            printf("Number %d is even num \n",num);
        }
        else{
            printf("Number %d is odd num \n",num);
        }
    }
    
    void worksheet3(){
        //worksheet3
        float num, result;
        float tax = 0.1;
        printf("Enter income number: ");
        scanf("%f", &num);
        result = num * tax;
        if(num <= 15000){
            result = num * tax;
        }
        else{
            tax = 0.15;
            result = num * tax;
        }
        printf("Tax is : %.1f \n", result);
    }

    void worksheet4(){

        //worksheet4
        int num1, num2, result;
        char operator;
        printf("Enter the operator: ");
        scanf("%c", &operator);
        printf("Enter the first number : ");
        scanf("%d", &num1);
        printf("Enter the second number : ");
        scanf("%d", &num2);

        if(operator == '+'){
            result = num1 + num2;
        }
        else if(operator == '-'){
            result = num1 - num2;
        }
        else if(operator == '/'){
            result = num1 / num2;
        }
        else{
            result = num1 * num2;
        }
        printf("The result is : %d", result);
    }
        
        void worksheet5(){
            //worksheet5
        char let;
        printf("Enter a letter: ");
        scanf("%c", &let);
        if(let >= 65 && let <= 122){
             if(let < 97){
                let += 32;
            }
            else if(let >= 97){
                let -= 32;
            }
            printf("Character is : %c \n", let);
        }
        else{
            printf("Insert only character!! \n");
        }

        }
        
        //worksheet6
        // int arr[4] = {5,7,6};
        // int max, min;
        // printf("Enter three number: ");
        // scanf("%d", &arr);

        // for(int i = 0 ; i <= strlen(arr) ; i++){
            // if(arr[i] >= arr[i+1]){
            //     max = arr[i];
            // }
            // else{
            //     min = arr[i];
            // }
            // printf(": %d \n",arr[i]);
            
        //}
        // printf("The max number is : %d, min number is : %d", max, min);
        
        void worksheet6(){
            //worksheet6 v.2 don't use array!!!
            int num1, num2, num3, max, min;
            printf("Enter first num: ");
            scanf("%d", &num1);

            printf("Enter second num: ");
            scanf("%d", &num2);
            printf("Enter third num: ");
            scanf("%d", &num3);
            if(num1 > num2){
                max = num1;
            }
            else if(num2 > num1){
                min = num1;
                max = num2;
            }
            else if(max > num3){
                if(min > num3){
                    min = num3;
                }
            }
            printf("Max num is : %d, Min num is : %d",max,min);
        }

        void worksheet7(){
            //worksheet7
        int num1, num2, num3;
            printf("Enter first num: ");
            scanf("%d", &num1);
            printf("Enter second num: ");
            scanf("%d", &num2);
            printf("Enter third num: ");
            scanf("%d", &num3);
            if(num1 == num2 && num2 == num3){
                printf("all same \n");
            }
            else if(num1 != num2 && num2 != num3 && num1 != num3){
                printf("all different \n");
            }
            else{
                printf("neither \n");
            }
        }

        void worksheet8(){
            //worksheet8
        int a,b;
        printf("Enter first num: ");
        scanf("%d", &a);
        printf("Enter first num: ");
        scanf("%d", &b);
        if(a > b){
            printf("Hi \n");
        }
        else{
            printf("Hey \n");
            if(a == b){
                printf("Yo!! \n");
            }
            else{
                printf("");
            }
        }
        printf("Thanks \n");
        }
        void worksheet8_2(){
            //worksheet8.2
        int a,b;
        printf("Enter first num: ");
        scanf("%d", &a);
        printf("Enter first num: ");
        scanf("%d", &b);
        if(a > b){
            printf("Hi \n");
        }
        else{
            printf("Hey \n");
        }
        if(b > 6){
                    printf("Yo!! \n");
        }
        
        
        printf("Thanks \n");
        }

        //worksheet9
        char status, ask1;
        int ask2;
        printf("Please, input _s_ : single , _m_ : married \n");
        scanf("%c", &status);
        if(status = 's'){
            printf("has a girl or boyfriend \n");
            printf("Please _y_ or _n_ \n");
            scanf("%c", &ask1);
            if(ask1 = 'y'){
                printf("You are not alone \n");
            }
            else{
                printf("Let me hug you \n");
            }
        }
        else if(status = 'm'){
            printf("how many kids does you has \n");
            if(ask2 = 0){
                printf("You can ask me for advices \n");
            }
            else{
                printf("GG \n");
            }
        }
        else{
            printf("Invalid martial status \n");
        }
        printf("Thank you for your informtion \n");

        

}

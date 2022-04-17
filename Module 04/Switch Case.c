#include<stdio.h>
#include<stdbool.h>
int main(){
      int num1, num2;
      char op;

      scanf("%d %c %d", &num1, &op, &num2);

      int result;

      switch(op){
        case '+':
            printf("%d", num1+num2);
            break;
        case '-':
            printf("%d", num1-num2);
            break;
        case '*':
            printf("%d", num1*num2);
            break;
        case '/':
            printf("%d", num1/num2);
            break;
        default:
            printf("Unknown Op");
            break;

      }


    /*  if (op == '+'){
        result = num1 + num2;
      }else if(op == '-'){
        result = num1 - num2;
      }else if(op == '*'){
        result = num1 * num2;
      }else if(op == '/'){
        result = num1 / num2;
      }

      printf("%d", result);

      */

 return 0;
}


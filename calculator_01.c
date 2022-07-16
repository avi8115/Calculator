#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

        int main(){

          float firstVal;
          float secondVal;
          char oper;
          float answer;

          scanf("%f %c %f",&firstVal, &oper, &secondVal);

          switch(oper){
            case '+':
            answer = firstVal + secondVal;
            break;

            case '-':
            answer = firstVal - secondVal;
            break;

            case '*':
            answer = firstVal * secondVal;
            break;

            case '/':
            answer = firstVal / secondVal;
            break;

            case '^':
            answer = pow(firstVal,secondVal);
            break;

            case ' ':
            answer = sqrt(secondVal);
            break;

            default:
            goto fail;
          }

          printf("%g %c %g = %g",firstVal,oper,secondVal,answer);
          goto exit;

          fail:
          printf("******FAIL******\n");

          exit:

          return 0;
        }
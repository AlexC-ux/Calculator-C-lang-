#include <stdio.h>
#include <locale.h>

int main()
{
    float num1,num2;
    float output;
    char operationMark;
    char *locale = setlocale(LC_ALL, "rus");
    printf("Привет, я - калькулятор.\nУмею складывать, умножать, вычитать и делить!\n\nДля операция используйте соответственно:\n+ сумма\n* умножить\n/ поделить\n(Не более одной операции за раз)\nВводите число, затем знак операции, затем второе чило.\n");

while(0==0){
        scanf("%f", &num1);
        scanf("%s", &operationMark);
        scanf("%f", &num2);

        if(operationMark=='+'){
            output=num1+num2;
            printf("Ваш ответ: %f\n", output);
        }else if(operationMark=='-'){
            output=num1-num2;
            printf("Ваш ответ: %f\n", output);
        }else if(operationMark=='*'){
            output=num1*num2;
            printf("Ваш ответ: %f\n", output);
        }else if(operationMark=='/'&&!(num2==0)){
            output=num1/num2;
            printf("Ваш ответ: %f\n", output);
        }else{
        printf("Проверьте правильность введённых данных!\n");
        }
        printf("Для продолжения расчётов начните вводить первое число.\n");
}

}

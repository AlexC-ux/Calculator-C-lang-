#include <stdio.h>
#include <locale.h>

int main()
{
    float num1,num2;
    float output;
    char operationMark;
    char *locale = setlocale(LC_ALL, "rus");
    printf("������, � - �����������.\n���� ����������, ��������, �������� � ������!\n\n��� �������� ����������� ��������������:\n+ �����\n* ��������\n/ ��������\n(�� ����� ����� �������� �� ���)\n������� �����, ����� ���� ��������, ����� ������ ����.\n");

while(0==0){
        scanf("%f", &num1);
        scanf("%s", &operationMark);
        scanf("%f", &num2);

        if(operationMark=='+'){
            output=num1+num2;
            printf("��� �����: %f\n", output);
        }else if(operationMark=='-'){
            output=num1-num2;
            printf("��� �����: %f\n", output);
        }else if(operationMark=='*'){
            output=num1*num2;
            printf("��� �����: %f\n", output);
        }else if(operationMark=='/'&&!(num2==0)){
            output=num1/num2;
            printf("��� �����: %f\n", output);
        }else{
        printf("��������� ������������ �������� ������!\n");
        }
        printf("��� ����������� �������� ������� ������� ������ �����.\n");
}

}

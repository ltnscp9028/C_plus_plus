#include <stdio.h>
int main(void)
{

        long number;
        printf("�Էµ������Ǻ�ȣ�ٲٱ�\n");
        printf("����(��ȣ����)�Է���Enter> ");
        scanf("%ld", &number);
        printf("�Էµ�����: %ld\n", number);
        number = ~number + 1;
        printf("��ȣ�ٲﰪ:%ld\n", number);
        return 0;
}



#include<stdio.h>
#include<string.h>

void Convert(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) { //���ڿ� �ȿ� ��ĭ�� ���������� ����
		if (str[i] >= 'A' && str[i] <= 'Z') //A�� Z ������ ���� �˻�
			str[i] += 32;
		//ASCII���� A�� 32 �ҹ��ڴ� 64�̴�. �׷��� �빮�ڸ� �ҹ��ڷ� ��ȯ �ϱ� ���� 
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32; // ex) a�� 64 A�� 32
	}
}

int main() {
    char str[100]; //���ڹ迭�� 100��

    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin);  //���� ���� ���ڿ� �ޱ� ���� �Լ�
    str[strcspn(str, "\n")] = '\0';  //\n�� ���ڿ� ���� ���� �ϴµ� �̰� �����ϱ� ���� ���

    printf("���ڿ��� ����: %zu\n", strlen(str)); //zu�� sizeof() �������� ��ȯ Ÿ��

    Convert(str);

    printf("��ȯ�� ���ڿ�: %s\n", str);

    return 0;
}
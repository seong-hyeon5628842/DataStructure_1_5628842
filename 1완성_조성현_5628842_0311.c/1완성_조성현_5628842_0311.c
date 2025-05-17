#include <stdio.h>
#include <stdint.h>

void printBits(uint32_t num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int input;

    printf("������ �Է��ϼ���: ");
    scanf_s("%d", &input);

    // ��ȣ�� �ִ� int�� ��ȣ ���� 32��Ʈ�� �ؼ�
    uint32_t bitPattern = (uint32_t)input;

    printf("�Էµ� ������ 32��Ʈ ǥ��: ");
    printBits(bitPattern);

    return 0;
}
/*#include <stdio.h>

int main() {
	int input;
	int result = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &input);

	printf("�Էµ� ������ 32��Ʈ ǥ�� : ");
	//��Ʈ ������
	for (int i = 31; i >= 0; --i) {
		result = input >> i & 1;
		printf("%d", result);
	}
	

	return 0;
}*/
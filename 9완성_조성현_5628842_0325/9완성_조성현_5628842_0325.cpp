#include <stdio.h>
#include <stdlib.h>

// 버블 정렬 함수
void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("정수의 개수를 입력하세요: ");
    scanf_s("%d", &n); 

    // n개의 정수를 저장할 수 있는 공간을 동적 할당
    int* numbers = (int*)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("메모리 할당 실패\n");
        return 1; // 프로그램 종료
    }

    // 정수 입력
    printf("%d개의 정수를 입력하세요:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &numbers[i]); 
    }

    // 정렬 수행
    bubbleSort(numbers, n);

    // 정렬된 결과 출력
    printf("오름차순으로 정렬된 정수들:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // 동적 할당 해제
    free(numbers);

    return 0;
}

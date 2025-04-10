#pragma
#define MAX 20

// 구조체 정의
typedef struct {
    int row;
    int col;
    int value;
} Element;

typedef struct {
    Element data[MAX];
    int size;
} List;

// 함수 선언
void insert(List* list, int r, int c, int val);
void inputMatrix(List* list);
void addMatrix(List* a, List* b, List* result);
void printMatrix(List* list);

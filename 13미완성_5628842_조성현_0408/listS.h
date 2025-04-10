#pragma
#define MAX 20

// ����ü ����
typedef struct {
    int row;
    int col;
    int value;
} Element;

typedef struct {
    Element data[MAX];
    int size;
} List;

// �Լ� ����
void insert(List* list, int r, int c, int val);
void inputMatrix(List* list);
void addMatrix(List* a, List* b, List* result);
void printMatrix(List* list);

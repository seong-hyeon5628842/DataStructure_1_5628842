#include<stdio.h>
#include<string.h>

void Convert(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) { //문자열 안에 빈칸이 없을때까지 실행
		if (str[i] >= 'A' && str[i] <= 'Z') //A와 Z 사이의 문자 검사
			str[i] += 32;
		//ASCII에서 A는 32 소문자는 64이다. 그래서 대문자를 소문자로 변환 하기 위해 
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32; // ex) a는 64 A는 32
	}
}

int main() {
    char str[100]; //문자배열을 100자

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);  //공백 포함 문자열 받기 위한 함수
    str[strcspn(str, "\n")] = '\0';  //\n을 문자열 끝에 포함 하는데 이걸 제거하기 위해 사용

    printf("문자열의 길이: %zu\n", strlen(str)); //zu는 sizeof() 연산자의 반환 타입

    Convert(str);

    printf("변환된 문자열: %s\n", str);

    return 0;
}
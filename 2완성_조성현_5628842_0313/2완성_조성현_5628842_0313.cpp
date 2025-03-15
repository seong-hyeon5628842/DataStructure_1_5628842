#include <stdio.h>   // 표준 입출력 라이브러리
#include <string.h>  // memcpy 함수 사용을 위한 라이브러리

int main() {
	float num;
	unsigned int bits; //실수를 32비트 정수로 변환해 쓸 변수

	printf("실수를 입력하세요 : ");
	scanf_s("%f", &num);

	memcpy(&bits, &num, sizeof(float)); //float 값을 unsigned int 로 변환

	unsigned int sign_bits = (bits >> 31) & 1; //부호 비트가 맨 앞에 1비트 표현해야함
	unsigned int exponent_bits = (bits >> 23) & 0xFF; //23비트를 시프트하고 0xFF로 지수 부분인 8비트만 추출하고 저장
	unsigned int mantissa_bits = bits & 0x7FFFFF; // 가수비트 23비트를 추룰하고 저장

	printf("부호 (1비트) : %u\n", sign_bits);
	printf("지수 (8비트) :");
	for (int i = 7; i >= 0; i--) { //i가 7부터 시작하는 이유 지수는 8비트로 저장되며 왼쪽부터 출력해야함
		printf("%u ", (exponent_bits >> i) & 1); //각 비트 한칸씩 띄우기 위해 u뒤에 한칸을 뛰운다
	}
	printf("\n");
	printf("가수 (23비트) : ");
	for (int i = 22; i >= 0; i--) {
		printf("%u ", (mantissa_bits >> i) & 1);
	}
	printf("\n");
	
}
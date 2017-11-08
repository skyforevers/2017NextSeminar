#include <stdio.h>

int plus(int a, int b) {
	// 덧셈 함수 작성
}

int sub(int a, int b) {
	// a가 b보다 클때는 -1이 출력되도록 함
}

int multiply(int a, int b) {
	// 곱셈 함수 작성
}

int division(int a, int b) {
	// 뺄셈 함수 작성
}

int main() {
	int a, b;
	int select;
	printf("수행할 연산을 선택하시오\n");
	printf("1 : 덧셈\n");
	printf("2 : 뺄셈\n");
	printf("3 : 곱셈\n");
	printf("4 : 나눗셈\n");
	scanf_s("%d", &select);
	printf("계산을 할 두개의 값을 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	if (select == 1) {
		printf("덧셈 결과값 : %d\n", plus(a, b));
	}
	else if (select == 2) {
		printf("뺄셈 결과값 : %d\n", sub(a, b));
	}
	else if (select == 3) {
		printf("곱셉 결과값 : %d\n",  multiply(a, b));
	} 
	else if (select == 4) {
		printf("나눗셈 결과값 : %d\n", division(a, b));
	}
	else {
		printf("잘못된 입력을 하셨습니다 , 프로그램종료");
	}
}
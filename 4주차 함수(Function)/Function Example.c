#include <stdio.h>

int plus(int a, int b) {
	// ���� �Լ� �ۼ�
}

int sub(int a, int b) {
	// a�� b���� Ŭ���� -1�� ��µǵ��� ��
}

int multiply(int a, int b) {
	// ���� �Լ� �ۼ�
}

int division(int a, int b) {
	// ���� �Լ� �ۼ�
}

int main() {
	int a, b;
	int select;
	printf("������ ������ �����Ͻÿ�\n");
	printf("1 : ����\n");
	printf("2 : ����\n");
	printf("3 : ����\n");
	printf("4 : ������\n");
	scanf_s("%d", &select);
	printf("����� �� �ΰ��� ���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	if (select == 1) {
		printf("���� ����� : %d\n", plus(a, b));
	}
	else if (select == 2) {
		printf("���� ����� : %d\n", sub(a, b));
	}
	else if (select == 3) {
		printf("���� ����� : %d\n",  multiply(a, b));
	} 
	else if (select == 4) {
		printf("������ ����� : %d\n", division(a, b));
	}
	else {
		printf("�߸��� �Է��� �ϼ̽��ϴ� , ���α׷�����");
	}
}
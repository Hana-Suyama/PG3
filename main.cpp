#include <stdio.h>

int Salary(int a, int b) {
	if (a <= 1) {
		return (b);
	}
	b = b * 2 - 50;
	return (Salary(a - 1, b));
}

int main(){

	int time = 9;

	printf("�J������ : %d����\n", time);
	printf("��ʓI�Ȓ����̌n : %d\n", Salary(time, 100));
	printf("�ċA�I�Ȓ����̌n : %d\n", time * 1072);

	return 0;
}
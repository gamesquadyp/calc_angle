#include <stdio.h>

void main_goal();
void sec_goal();

int x;

int main(void) {

	int choose;
	printf("1 : �� ���� ũ�⸦ �˰� �� ���� ���� ���ϰ� �ʹ�.\n");
	printf("2 : �� ���� ���� �˰� �� ���� ũ�⸦ ���ϰ� �ʹ�.\n");
	printf("���� : ");
	scanf_s("%d", &choose);
	fflush(stdin);
	if (choose == 1) {
		main_goal();
	}
	else if (choose == 2) {
		sec_goal();
	}
	else {
		printf("���� 1 �ƴϸ� 2 �� �Է����ּ���.\n");
	}




}

void main_goal() {
	printf("�� ���� ũ�⸦ �Է� �Ͻʽÿ� : ");
	scanf_s("%d", &x);
	fflush(stdin);
	int i = 3;
	int temp;
	while (1) {
		temp = (180 * (i - 2)) / i;

		if (temp == x) {
			break;
		}

		else {
			i++;
		}
	}
	printf("�� ���� ũ�Ⱑ %d �� ������ %d���� �Դϴ�\n", x, i);
	printf("�ƹ�Ű�� ���� �����մϴ�...");

	int input;
	printf("1�� : �ٽ� ����ϱ�");
	printf("2�� : ����");
	scanf_s("%d", &input);

	if (input == 1) {
		main();
	}

	else if (input == 2) {
		exit(0);
	}
	else {
		printf("�߸� �Է� �Ͽ����ϴ�. �ٽ� �Է� ���ּ���");
	}
}

void sec_goal() {
	int y;
	int temp;
	printf("�� ���� �ΰ���? : ");
	scanf_s("%d", &y);
	fflush(stdin);

	temp = (180 * (y - 2)) / y;

	int input;
	printf("%d���� �� ���� ũ��� %d �Դϴ�.\n\n\n", y, temp);
	printf("1�� : �ٽ� ����ϱ�");
	printf("2�� : ����");
	scanf_s("%d", &input);

	if (input == 1) {
		main();
	}

	else if (input == 2) {
		exit(0);
	}
	else {
		printf("�߸� �Է� �Ͽ����ϴ�. �ٽ� �Է� ���ּ���");
	}
}
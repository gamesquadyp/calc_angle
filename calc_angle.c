#include <stdio.h>

void main_goal();
void sec_goal();

int x;

int main(void) {

	int choose;
	printf("1 : 한 각의 크기를 알고 몇 각형 인지 구하고 싶다.\n");
	printf("2 : 몇 각형 인지 알고 한 각의 크기를 구하고 싶다.\n");
	printf("선택 : ");
	scanf_s("%d", &choose);
	fflush(stdin);
	if (choose == 1) {
		main_goal();
	}
	else if (choose == 2) {
		sec_goal();
	}
	else {
		printf("오류 1 아니면 2 만 입력해주세요.\n");
	}


	return 0;

}

void main_goal() {
	printf("한 각의 크기를 입력 하십시오 : ");
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
	printf("한 각의 크기가 %d 인 도형은 %d각형 입니다\n", x, i);
	printf("아무키나 눌러 종료합니다...");

	int input;
	printf("1번 : 다시 계산하기");
	printf("2번 : 종료");
	scanf_s("%d", &input);

	if (input == 1) {
		main();
	}

	else if (input == 2) {
		exit(0);
	}
	else {
		printf("잘못 입력 하였습니다. 다시 입력 해주세요");
	}
}

void sec_goal() {
	int y;
	int temp;
	printf("몇 각형 인가요? : ");
	scanf_s("%d", &y);
	fflush(stdin);

	temp = (180 * (y - 2)) / y;

	int input;
	printf("%d각형 한 각의 크기는 %d 입니다.\n\n\n", y, temp);
	printf("1번 : 다시 계산하기");
	printf("2번 : 종료");
	scanf_s("%d", &input);

	if (input == 1) {
		main();
	}

	else if (input == 2) {
		exit(0);
	}
	else {
		printf("잘못 입력 하였습니다. 다시 입력 해주세요");
	}
}

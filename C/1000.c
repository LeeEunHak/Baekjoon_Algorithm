/*
문제: 두 정수 A와 B를 입력받은 다음, A + B를 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main()
{
	int a, b, sum;

	scanf("%d %d", &a, &b);

	sum = a + b;

	printf("%d\n", sum);

	return 0;
}
#include <stdio.h>

void main(void) {

	double a = 8.888;
	printf("a : %f\n", a);

	char b = 'd';
	printf("b : %c\n", b);

	int c = 30;
	printf("c : %d\n", c);

	char d[30] = "이순신";
	printf("%s\n", d);
	
	double e = 3.24 + 5.34;
	double e1 = 3.24;
	double e2 = 5.34;
	double e3 = e1 + e2;

	printf("%f, %f, %f\n", e, e1 + e2, e3);

	char e4[30] = "3.24 + 5.34";
	printf("%s\n", e4);

	int f = 10 + 20;
	printf("%d\n", f);

	double g = 3.333;
	printf("%f\n", g);

	char h[10] = "po";
	printf("%s\n", h);

	char i[10] = "ㄱ";
	printf("%s\n", i);

	char j[30] = "가나다라abcde";
	printf("%s\n", j);

	char k[30] = "abcd 12345";
	printf("%s\n", k);

	char l[30] = "010-6545-5804";
	printf("%s\n", l);

	// 01065455804로 정수로 입력한다면
	/*int m = 01065455804;
	printf("%d\n", m);*/
	//앞에 0이 붙으면 뒤의 수를 8진수로 인식해서
	//8진수를 10진수로 변환한 수가 나온다.
	//문자와 숫자가 헷갈린다면 의미를 생각해본다.
}
#include <stdio.h>

void main(void) {

	double a = 8.888;
	printf("a : %f\n", a);

	char b = 'd';
	printf("b : %c\n", b);

	int c = 30;
	printf("c : %d\n", c);

	char d[30] = "�̼���";
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

	char i[10] = "��";
	printf("%s\n", i);

	char j[30] = "�����ٶ�abcde";
	printf("%s\n", j);

	char k[30] = "abcd 12345";
	printf("%s\n", k);

	char l[30] = "010-6545-5804";
	printf("%s\n", l);

	// 01065455804�� ������ �Է��Ѵٸ�
	/*int m = 01065455804;
	printf("%d\n", m);*/
	//�տ� 0�� ������ ���� ���� 8������ �ν��ؼ�
	//8������ 10������ ��ȯ�� ���� ���´�.
	//���ڿ� ���ڰ� �򰥸��ٸ� �ǹ̸� �����غ���.
}
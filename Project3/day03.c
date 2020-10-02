#include <stdio.h>
#define FULL 100            // 메크로 : 치환
#define EMPTY 0
#define PI 3.14
#define AREA(r) r * r * PI

void main(void) {

	// 서식문자
	// 데이터를담을 수 있는 그릇
	// %뒤에 어떤 문자가 오느냐에 따라서
	// 어떤 데이터를 담을 수 있는 지가 결정
	
	// %d : 10진수 정수(소숫점이 없는 숫자)
	// %f : 10진수 실수(소숫점이 있는 숫자)
	// %c : 문자 1개(알파벳 한 글자)
	// %s : 문자역(알파벳 두 글자 이상 or 한글)
	// %o : 8진수
	// %x : 16진수
	// %p : 포인터(주소) 정수

	printf("%d + %d = %d\n", 10, 2, 10 + 2);
	printf("%d + %d =   \n", 10, 2, 10 + 2);
	printf("%d + %d = %d\n", 10, 2        );

	printf("몸무게 : %f kg\n", 55.5);

	printf("%c, %c\n", 'A', 'a'); 
	printf("%c + %c = %c\n", '1', '1', '1' + '1');
	//작은따옴표로 표시해야 문자로 인식.

	//아스키 코드표
	//for (int i = 0; i < 128; i++) {
		//printf("%c => %d ( %x) \n", i, i, i);

	printf("%s\n", "C언어 수업");

	printf("173을 8진수로 출력 : %o\n", 0173);
	printf("173을 10진수로 출력 : %d\n", 173);
	printf("173을 16진수로 출력 : %x\n", 0x173);
	//2진수는 불가능

	printf("주유 최고 상태 : %d %% \n", FULL);
	printf("주유 최저 상태 : %d %% \n", EMPTY);

	printf("원의 넓이 : %f\n", AREA(5));

	}
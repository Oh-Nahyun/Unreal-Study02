//
//  6_메크로_인라인함수.cpp
//  CProject
//
//  Created by 오나현 on 12/16/24.
//

#include <stdio.h>

/*
/// 메크로 함수

/// 원형
/// #define 함수이름(인자) 치환할것

//c = a * b;
//c = a + b;

int square(int a, int b)
{
	//int c = a * b;
	//return c;

	return a * b;
}

// --------------------------------------------------

int square(int a, int b) {	return a * b;	}
int square2(int a) { return a * a; }
int main()
{
	printf("square(3,3) : %d\n", square(3, 3));
	printf("square2(3) : %d\n", square2(3));

	return 0;
}

// --------------------------------------------------

#define square3(x) x * x
#define square4(x) (x) * (x)

int square(int a, int b) { return a * b; }
int square2(int a) { return a * a; }
int main()
{
	printf("square(3,3) : %d\n", square(3, 3));
	printf("square2(3) : %d\n", square2(3));

	printf("square3(3) : %d\n", square3(3));				// 문장 자체가 3*3으로 변경된다.
	// printf("square3(3) : %d\n", 3*3);					// 위와 같은 코드

	printf("square3(3 + 1) : %d\n", square3(3 + 1));		// 결과값 : 7 (논리 에러)
	// printf("square3(3 + 1) : %d\n", 3 + 1 * 3 + 1);		// 위와 같은 코드 // square4()가 어찌보면 해결책

	printf("square4(3 + 1) : %d\n", square4(3 + 1));		// 결과값 : 16
	// printf("square4(3 + 1) : %d\n", (3 + 1) * (3 + 1));	// 위와 같은 코드

	/// 따라서, #define은 간단한 메크로 함수를 사용할 때는 좋다.
	/// (함수보다 빠르다.)

	return 0;
}

// --------------------------------------------------

/// 시간 날짜 관련 define
/// 문제점을 빠르게 찾을 수 있다.

//__DATE__		// 날짜를 mm.dd.yyyy
//__TIME__		// 시간을 hh:mm:ss
//__FILE__		// 현재 소스 파일의 경로와 이름을 나타내는 문자열
//__LINE__		// 처리 중인 라인 번호를 나타내는 문자열
//__STDC_HOSTED__ // 호스트 환경이면 1, 아니면 0

int main()
{
	printf("날짜 : %s\n", __DATE__);
	printf("시간 : %s\n", __TIME__);
	printf("소스 파일에서 처리 중인 라인 번호 : %d\n", __LINE__);
	printf("호스트인가? : %d\n", __STDC_HOSTED__);

	return 0;
}

// --------------------------------------------------

/// 인라인 함수

__inline int square(int a)
{
	return a * a;
}

int main()
{
	printf("square(3 + 1) : %d\n", square(3 + 1));
	// 인라인 처리를 하게 되면 함수로 이동했다가 오는 것이 아닌 그냥 그 값을 바로 출력할 수 있게 도와준다.
	// 의미 : printf("square(3 + 1) : %d\n", square(3 + 1){ return a * a; }); // 속도가 더욱 빨라진다.

	return 0;
}
*/

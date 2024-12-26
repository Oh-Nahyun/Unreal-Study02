//
//  16_로또.cpp
//  CppProject
//
//  Created by 오나현 on 12/26/24.
//

#include <stdio.h>		// 기본
#include <stdlib.h>		// 랜덤
#include <time.h>		// 시간
#include <Windows.h>	// 콘솔 조작을 위한 헤더파일

// using namespace std;

// 글자색을 바꾸는 Windows 함수 (test)
void setColor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

int main()
{
	/// 사용할 변수 정의
	int lotto[6] = {0,0,0,0,0,0};
	int seed;								// 입력받은 변수 (행운의 씨앗! = 랜덤값을 조금이라도 보정하기 위한 수단)
	int i = 0, j = 0;
	int temp = 0;
	int cnt = 0;							// 중복 세기를 위한 변수

	// --------------------------------------------------

	/// 인터페이스
	system("title 로또 번호 생성기");		// 제목 이름 (프로그램 이름)
	system("mode con: cols=52 lines=20");	// 콘솔창 크기 지정

	// [test #1]_글자색 알아보기 (16개)
	// 0 ~ 15 : 글자색 (16진수 : 0 1 2 3 4 5 6 7 8 9 A B C D E F)
	// (검정색, 파란색, 녹색, 청록색, 빨간색, 자주색, 노란색, 흰색, 회색, 연한 파랑, 연한 녹색, 연한 청록색, 연한 빨간색, 연한 자주색, 연한 노란색, 밝은 흰색)
	/*for (i = 0; i < 16; i++)
	{
		setColor(i, 0);
		printf("SetColor %d\n", i);
	}*/

	// [test #2]_글자색 알아보기 (16개)
	system("color e");	// 첫자리는 글자색 설정
	system("color e0");	// 첫자리는 배경색, 두번째는 글자색

	// --------------------------------------------------

	/// 화면에 제목 출력
	printf("\t***** 로또 번호 생성기 *****\n\n");

	// --------------------------------------------------

	/// 입력 부분 (랜덤의 수를 확보하기 위한 수단)
	while (true)
	{
		// 1 ~ 7 사이의 숫자를 정상적으로 입력할 때까지 반복 (앞의 숫자는 임의 지정한 수)
		printf("행운의 숫자를 입력해주세요. (1~7) : ");
		scanf_s("%d", &seed);

		if (seed > 7 || seed < 1)
		{
			printf("범위 내 숫자를 입력해주세요.\n");
			continue;
		}
		break;
	}

	// 랜덤 초기화에 적용 (Seed 값 적용)
	srand(seed * (unsigned int)time(NULL));

	// 연출 화면
	for (i = 0; i < 5; i++)
	{
		system("cls");
		system("color 0a");
		printf("\t***** 로또 번호 생성기 *****\n\n");
		printf("      ☆★☆★☆ 번호 생성중 ☆★☆★☆");
		Sleep(200);

		system("cls");
		system("color 1b");
		printf("\t***** 로또 번호 생성기 *****\n\n");
		printf("      ★☆★☆★ 번호 생성중. ★☆★☆★");
		Sleep(200);

		system("cls");
		system("color 2c");
		printf("\t***** 로또 번호 생성기 *****\n\n");
		printf("      ☆★☆★☆ 번호 생성중.. ☆★☆★☆");
		Sleep(200);

		system("cls");
		system("color 3d");
		printf("\t***** 로또 번호 생성기 *****\n\n");
		printf("      ★☆★☆★ 번호 생성중... ★☆★☆★");
		Sleep(200);
	}

	system("cls");
	system("color 3d");

	// --------------------------------------------------

	// 숫자 추려내기 (중복이 없도록)
	while (cnt != 7)	// 숫자 중복의 횟수가 7이 아닌 경우까지 반복한다.
	{
		cnt = 0;		// 중복 숫자 초기화

		for (i = 0; i < 6; i++)
		{
			// 랜덤 범위는 1 ~ 45까지
			temp = rand() % 45 + 1;

			// 현재 번호 저장
			lotto[i] = temp;

			// 이전에 생성된 번호와 같은지 비교
			for (j = 0; j < i; j++)
			{
				// 중복된 것이 있다면, 중복되지 않도록 재생성
				if (lotto[j] == temp)
				{
					i--;
					cnt++;	// 중복 횟수도 증가
				}
			}
		}

		// 번호 6개가 생성되었을 때, 중복의 횟수가 7회이면 종료
	}

	// --------------------------------------------------

	// 숫자를 오름차순으로 정렬 (버블 정렬)
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 6; j++)
		{
			if (lotto[i] > lotto[j])
			{
				temp = lotto[i];
				lotto[i] = lotto[j];
				lotto[j] = temp;
			}
		}
	}

	// --------------------------------------------------

	// 최종 출력
	printf("\t***** 로또 번호 생성기 *****\n\n");
	printf("\a   생성된 행운의 번호 : ");	// \a : 시스템 사운드

	for (i = 0; i < 6; i++)
	{
		printf("\a%d ", lotto[i]);
		Sleep(500);	// 0.5초 딜레이
	}

	// --------------------------------------------------

	// 종료 연출
	printf("\n\n 프로그램을 종료합니다. \n\n\n");
	Sleep(2000);		// 2초 딜레이
	system("pause");	// 일시정지.. 키입력 대기..

	return 0;
}

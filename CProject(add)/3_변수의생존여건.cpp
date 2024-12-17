//
//  3_변수의생존여건.cpp
//  CProject
//
//  Created by 오나현 on 12/13/24.
//

#include <stdio.h>

/*
/// 변수의 종류
/// [1] 지역 변수 (local variable)
/// [2] 전역 변수 (global variable)
/// [3] 정적 변수 (static variable)

// --------------------------------------------------

/// 변수의 접근 범위

/// 전역 변수
/// 모든 전역 변수는 정의 시 자동으로 0으로 초기화된다.
/// 지역 변수와 달리 데이터 영역에 할당된다.
int global;

int function()
{
	global++;
	return 0;
}

int main()
{
	global = 10;
	function();
	printf("%d\n", global);
	return 0;
}

// --------------------------------------------------

/// 변수의 생존 기간
/// 일반적으로 정의된 변수들은 정의된 지역을 빠져나갈 때 파괴된다.
/// { } 영역을 벗어날 때 사라진다.
int* function()
{
	//int a = 2;		// 지역을 나가면 파괴되는 변수 (지역 변수)
	static int a = 2;	// 지역을 나가도 파괴되지 않는 변수 (정적 변수)
	return &a;
}

int main()
{
	int* pa = function();
	printf("%d\n", *pa);

	return 0;
}
*/

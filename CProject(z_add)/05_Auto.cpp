//
//  05_Auto.cpp
//  CppProject
//
//  Created by 오나현 on 01/16/25.
//

/*
/// Auto 키워드
/// C++ 11 이후 auto

int a = 10;

/// "타입추론", "데이터 추론", "자동 데이터 추론" (모두 같은 말)
/// 초기화 값에 따라 알아서 데이터 타입을 정해주는 키워드

auto a1 = 10;				// int 타입
auto a2 = 10.0f;			// float 타입
auto a3 = 'c';				// char 타입
auto a4 = "BBB";			// string 타입
auto a5 = { 10, 20, 30 };	// int 배열 타입

/// jave, C# : var a 10; var b = "문자"; ==> 비슷

// --------------------------------------------------

/// auto 와 &, * 함께 사용하기 ( auto&, auto* )
/// &, * : 복사가 되지 않고 참조(레퍼런스)하거나 주소(포인터)를 가리키거나.

/// 예시
vector<int> v = { 1,2,3,4,5 };
//vector<int>::iterator iter;
//for (iter = v.begin(); iter != v.end(); iter++)
for (auto iter = v.begin(); iter != v.end(); iter++)
{
	*iter *= 2;
}

/// &와 range based for문
for (auto& elem : v)
{
	elem *= 2;
}

// --------------------------------------------------

/// range based for문

/// 범위 기반 for문 사용법
for (데이터타입 elem : 데이터리스트)
{
	// elem 이용하여 코드 작성 가능
}

/// 범위 기반 for문 차이점
int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
for (int i = 0; i < 10; i++)
{
	cout << arr[i] << endl;
}

for (int elem : arr)
{
	//elem = arr[0];
	//elem = arr[1];
	//...
	elem += 1;	// elem 값만 바뀜, 원본은 변화 없음.

	cout << elem << endl;
}

for (int& elem : arr)
{
	elem += 1;	// arr[] 값도 변경됨.

	cout << elem << endl;
}

/// 문제점
/// 1. 완전히 for문을 대체하지는 못한다.
/// 2. 범위 기반 for문에서는 index 정보가 존재하지 않는다. index로 구분할 수 있는 조절이 어렵다.
/// 3. 범위 기반 for문 배열의 요소를 변경할 수 없다. 배열의 요소들이 elem이라는 변수에 복사된다.

// --------------------------------------------------

/// auto의 기본 예제들

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> v = { "abcd", "efgh", "ijkl", "mnop", "qrst" };

	// 이름의 길이
	//vector<string>::iterator iter = v.begin();

	// --------------------------------------------------

	for (vector<string>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << ", ";
	}
	cout << endl << endl;

	// --------------------------------------------------

	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << ", ";
	}
	cout << endl << endl;

	// --------------------------------------------------

	for (auto elem : v)
	{
		cout << elem << ", ";
	}
	cout << endl << endl;

	return 0;
}
*/

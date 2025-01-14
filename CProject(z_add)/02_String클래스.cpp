//
//  02_String클래스.cpp
//  CppProject
//
//  Created by 오나현 on 01/14/25.
//

/*
/// String 클래스, 문자열

/// 헤더파일 <string>((이 있었는데 너무 좋아서 기본으로 탑재하도록 바뀌었다.))
/// std::string; => string;

// --------------------------------------------------

/// 함수 설명

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	// 생성
	string str("이름이름");

	string str1;
	str = "이름이름";
	//string str = "이름이름";

	string str2(str1);	// 복사 생성

	// --------------------------------------------------

	// 길이
	str.length();
	str.size();

	// 한 문자 반환 받기
	str.at(n);			// n : 위치값 (iterator)
						// n번째에 있는 문자 반환 (배열처럼 생각하면 된다.)
						// str[n]; 문자열도 사용 가능

	// 문자열 찾기
	str.find("문자열");	// 찾는 문자열의 첫번째 인자 반환
						// 못찾을 때 string::npos 반환

	str.front();		// 맨 앞의 인자 반환
	str.back();			// 맨 뒤의 인자 반환

	str.clear();		// string 이 들어있는 문자열을 지우는 함수

	str.empty();		// string 이 비어있는지 확인하는 함수

	str.capacity();		// 할당된 메모리 크기를 가져온다.

	str.c_str();		// "name" 이라는 string 이 있다면 "name\0"으로 변환해준다. (C 스타일로 변환)

	str.substr(...);	// 함수 원형 : str.substr(size_t index = 0, size_t len = npos) cont;
						// index 에서 부터 len 만큼 잘라서 반환하는 함수

	str.replace(...);	// 함수 원형 : str.replace(size_t index, size_t len, const string& str);
						// index 위치에서 len 길이까지의 범위를 매개변수로 들어온 str 전체로 대체하는 함수

	str.compare(...);	// 함수 원형 : str.compare(size_t index, size_t len, const string& str2);
	str1.compare(str2);	// 리턴값이 0(true) 이면, str1 == str2
						// 리턴값이 0보다 작으면, str1 < str2
						// 리턴값이 0보다 크면,   str2 > str2

	// 비교
	str1 < str2;
	str1 > str2;		// 사전순으로 비교 가능
	str1 == str2;

	// 연결
	str1 + str2;		// 연결(+)
	str1 += str2;		// 연결(+=)

	// 대입
	str1 = str2;

	return 0;
}
*/

// --------------------------------------------------

/// 

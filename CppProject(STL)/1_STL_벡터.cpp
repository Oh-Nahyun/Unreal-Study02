//
//  1_STL_벡터.cpp
//  CppProject
//
//  Created by 오나현 on 12/26/24.
//

/*
/// (1) STL (Standard Template Library)
/// (C++ 표준 템플릿 라이브러리)
/// 프로그램에 필요한 자료구조와 알고리즘을 Template으로 제공하는 라이브러리

/// (2) STL의 구성요소
/// 
/// [Container]
/// - 객체를 저장하는 객체. 자료구조, 클래스 템플릿으로 구현되어 있습니다.
/// Sequence Container 종류 (순서) : array, vector, list, deque
/// Associative Container 종류 (연관) : set, multiset, map, multimap
/// 
/// [Iterator (반복자)]
/// - 포인터와 같은 개념으로 컨테이너의 원소를 가리키고, 가리키는 원소에 접근하여 다음 원소를 가리키는 기능. 순회.
/// 
/// [Algorithm]
/// - 정렬, 삭제, 검색, 연산 등을 해결하는 일반적인 방법을 제공하는 함수 템플릿.
/// 
/// [Function Object]
/// - 함수처럼 동작하는 객체, operator() 연산자를 오버로딩한 객체.
/// - 컨테이너와 알고리즘 등에 클라이언트 정책을 반영하게 한다.
/// 
/// [Container Adaptor (변환기)]
/// - 구성요소의 인터페이스를 변경해 새로운 인터페이스를 갖는 구성요소로 변경!!
/// stack, queue, priority_queue : Container Adaptor를 이용해서 변경.
/// 
/// [Allocator]
/// - 컨테이너의 메모리 할당 정책. 캡슐화한 클래스 객체.

// --------------------------------------------------

/// Vector Container
/// 1. vector 컨테이너는 자동으로 메모리가 할당되는 배열!! (중요!!)
/// 2. template를 사용하기 때문에 데이터 타입을 마음대로 넣을 수 있다!!
/// 3. 스택과 비슷한 느낌.
/// 4. 중간에 값을 삽입하거나 삭제할 수 있다. (지원함.)
/// (But, 배열 기반이라서 삽입/삭제가 빈번히 일어나면 효율이 급감함!!)

// --------------------------------------------------

/// Vector의 사용

#include <vector>			// vector 사용을 위한 헤더 파일

using namespace std;

int main()
{
	/// vector 선언
	/// vector의 생성자와 연산자
	vector<int> v1;			// 비어있는 v1 생성
	vector<int> v2(5);		// 기본값이 0으로 초기화된, 5개의 원소를 가진 v2 생성
	vector<int> v3(5, 2);	// 기본값이 2으로 초기화된, 5개의 원소를 가진 v3 생성
	vector<int> v4(v3);		// v4는 v3를 복사하여 생성 (깊은 복사)
	
	/// 비교 가능
	/// 연산자로 대소 비교 가능. (== != > < >= <=)

	/// vector 멤버 함수 (거의 모든 STL과 비슷하다..?)
	int n = 100;	// 
	int index = 0;

	vector<int> v;	// 기본

	v.assign(5, 2);	// 2의 값으로 5개의 원소 할당

	v.at(index);	// index번째 원소를 참조 (범위 점검이 된다. (예시로 index = 7이면 범위를 벗어남을 점검해주어 안전하다는 장점이 있다.))

	v[index];		// index번째 원소를 참조 (범위 점검을 안하여 v.at(index)보다 속도가 빠르다.)

	v.front();		// 첫번째 원소를 참조

	v.back();		// 마지막 원소를 참조

	v.clear();		// 모든 원소를 제거 (원소만 제거되고 메모리 (공간)은 남아있다.)
					// size만 줄어들고 capacity는 그래도 남아있다.

	v.push_back(7);	// 마지막 원소 뒤에 원소 7을 삽입

	v.pop_back();	// 마지막 원소를 제거

	v.begin();		// 첫번째 원소를 가리킨다. (iterator와 함께 사용)

	v.end();		// 마지막의 "다음"을 가리킨다. (iterator와 함께 사용)

	v.rbegin();		// reverse begin (거꾸로해서 첫번째 원소를 가리킨다.) (iterator와 함께 사용)

	v.rend();		// reverse end (거꾸로해서 마지막의 "다음"을 가리킨다.) (iterator와 함께 사용)

	v.reserve(n);	// n개의 원소를 저장할 위치를 예약 (미리 동적 할당을 해놓는 것)

	v.resize(n);	// 크기를 n으로 변경 (커진 경우에는 default 값인 0으로 초기화한다.)

	v.resize(n, 3);	// 크기를 n으로 변경 (커진 경우에는 3으로 초기화한다.)

	v.size();		// 원소의 갯수를 리턴

	v.capacity();	// 할당된 공간의 크기를 리턴

	vector<int> v5;
	vector<int> v6;
	v6.swap(v5);	// v5와 v6의 원소와 capacity를 바꿔준다. (모든 것을 스왑해줌)
					// v5의 capacity를 없앨 때 사용하기도 한다. (= 할당한 메모리를 프로그램이 끝나기도 전에 없애고 싶을 때)

	v.insert(2, 3, 4);	// 2번째 위치에 3개의 4값을 삽입한다. (뒷 데이터는 뒤로 밀림)
	v.insert(2, 3);		// 2번째 위치에 3의 값을 입력한다.
						// 삽입한 곳의 iterator를 반환한다.

	v.erase(iter);	// iter가 가리키는 원소를 제거한다.
					// size만 줄어들고 capacity는 그대로 남는다.

	v.empty();		// vector가 비었으면 리턴 true.
					// 비어있다의 기준은 size가 0이라는 뜻이다. (capacity와는 상관이 없다!)

	return 0;
}

// --------------------------------------------------

/// vector의 size와 capacity와의 관계!!!

// v.size();		// 원소의 갯수를 리턴
// v.capacity();	// 할당된 공간의 크기를 리턴

/// 공간 할당의 기준 (dev c++ 기준)

// 원소 갯수 1 => capacity 1
// 원소 갯수 2 => capacity 2
// 원소 갯수 3 => capacity 4
// 원소 갯수 4 => capacity 4
// 원소 갯수 5 => capacity 8
// 원소 갯수 6 => capacity 8
// 원소 갯수 7 => capacity 8
// 원소 갯수 8 => capacity 8
// 원소 갯수 9 => capacity 16

// 기존 메모리의 *2로 증가하게 된다.
// ((2의 배수로 만들 때 속도가 올라간다.))
// push_back이 일어날 때마다 동적 할당을 하면, 비효율적이므로 미리 정해둔 만큼 동적 할당을 하는 것이다.

// --------------------------------------------------

/// vector의 size와 capacity (test)

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	cout << "[ v[i], v.size(), v.capacity() ]" << endl;

	for (int i = 0; i < 164; i++)
	{
		v.push_back(i + 1);

		cout << "[ " << v[i] << ", " << v.size() << ", " << v.capacity() << " ]" << endl;
	}

	return 0;
}

// --------------------------------------------------

/// 데이터 접근 방식

// vector의 멤버 형식

// iterator : 반복자 형식
// reverse_iterator : 역반복자 형식
// value_type : 원소의 형식
// size_type : 원소의 개수의 형식

/// 접근 방법 및 출력 방법

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(21);
	v.push_back(31);
	v.push_back(53);
	v.push_back(64);
	v.push_back(15);

	// 멤버 형식을 이용한 반복 (size_type)
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << ", ";	// 아래 코드보다 안정하다. (보안)
	}
	cout << endl;

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << ", ";		// 위 코드보다 속도가 더 빠르다. (속도)
	}
	cout << endl << endl;

	// 배열처럼 반복 (int i를 이용)
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << ", ";
	}
	cout << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ", ";
	}
	cout << endl << endl;

	// (기본!!) iterator를 이용한 반복!!
	// (안정성과 속도 측면에서 가장 최적의 방법이다.)
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << ", ";
	}
	cout << endl << endl;

	return 0;
}

// ==================================================

/// TEXT 저장 (C++ string)
// 이전에는 이렇게 사용.....
// char name[10];
// char* cstring;

// vector<char> vc;	// 1바이트는 콜! 하지만 2바이트는?

// STL string
#include <string>
std::string;

// 생성
string str1 = "abcdef한글1";
string str2("abcdef한글2");

// 길이
str1.length();

// 길이 (& 사이즈)
str1.size();

// 한글자 반환
str1.at(n);

// 문자열 찾기
str1.find("문자열");
// 찾는 문자열의 첫번째 인자 반환.
// 못찾을 때마다 string::npos 반환.

// 비교
str1 == str2;

// 비교2
str1.compare(str2);
// return 값이 0과 같으면 true, 0보다 작으면 str1 < str2, 1보다 크면 str1 > str2

// 글자 연결
str1 + str2;	// "abcdef한글1" + "abcdef한글2" = "abcdef한글1abcdef한글2"
str1 += str2;

// 대입
str1 = str2;

// ==================================================

/// 삽입 & 삭제

#include <iostream>
#include <vector>
#include <string>	// #include <string.h>은 옛날꺼.. F12 참조용

using namespace std;

int main()
{
	vector<string> v;

	v.push_back("aaaaa");
	v.push_back("bbbbb");
	v.push_back("ccccc");
	v.push_back("ddddd");
	v.push_back("eeeee");

	// v.front() & v.back()
	cout << v.front() << ", " << v.back() << endl << endl;

	// 데이터 확인 및 삭제 (v.pop_back())
	vector<string>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << ", ";
	}
	cout << endl;

	v.pop_back();

	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << ", ";
	}
	cout << endl << endl;

	// 특정 원소 삭제 (v.erase())
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		if (*iter == "ccccc")
		{
			v.erase(iter);
			break;
		}
	}

	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << ", ";
	}
	cout << endl << endl;

	return 0;
}

// --------------------------------------------------

// 인벤토리와 같이 수시로 데이터가 바뀌는 경우엔 리스트를 사용하고, 아닌 경우 벡터를 사용하라.
*/

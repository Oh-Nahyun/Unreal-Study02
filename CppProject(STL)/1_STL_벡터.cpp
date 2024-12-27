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
*/

// --------------------------------------------------

/// Vector의 사용

#include <vector>			// vector 사용을 위한 헤더 파일

using namespace std;

int main()
{
	// vector 선언
	// vector의 생성자와 연산자
	vector<int> v1;			// 비어있는 v1 생성
	vector<int> v2(5);		// 기본값이 0으로 초기화된, 5개의 원소를 가진 v2 생성
	vector<int> v3(5, 2);	// 기본값이 2으로 초기화된, 5개의 원소를 가진 v3 생성
	vector<int> v4(v3);		// v4는 v3를 복사하여 생성 (깊은 복사)
	
	// 비교 가능
	// 연산자로 대소 비교 가능. (== != > < >= <=)

	// vector 멤버 함수 (거의 모든 STL과 비슷하다..?)
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
	v6.swap(v5);

	v.insert(2, 3);
	v.erase(iter);
	v.empty();

	return 0;
}

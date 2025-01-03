//
//  5_STL_셋.cpp
//  CppProject
//
//  Created by 오나현 on 01/03/25.
//

/*
/// Set Container
/// 연관 컨테이너 : set, multiset, map, multimap

/// 연관 컨테이너의 특징
/// 1. 노드 기반 컨테이너
/// 2. 균형 이진 트리로 구현 (검색을 빠르게 하기 위함.)
/// 3. 멤버 변수, 생성자 등이 99% 같다.

/// ((데이터를 많이 왔다갔다하려면 리스트, 검색을 빠르게 하려면 셋 사용!))

/// Key라 불리는 원소들의 집합으로 이루어진 컨테이너이다. (원소 = key)
/// ***** key 값은 중복이 허용되지 않는다!
/// 원소가 insert 멤버 함수에 의해 삽입이 되면, 원소는 자동으로 정렬된다.
/// 디폴트 정렬 기준은 오름차순(less)이다.

// --------------------------------------------------

/// Set의 사용

#include <iostream>
#include <set>			// set 사용을 위한 헤더 파일

using namespace std;

int main()
{
	/// set 선언
	/// set의 생성자와 연산자
	set<int> s1;			// 비어있는 s1 생성
	set<pair<int, string>> s2;
	set<int> s3(pred);		// pred를 통해 정렬 기준을 세운다.
	set<int> s4(s3);		// s4는 s3를 복사하여 생성 (깊은 복사)

	/// 비교 가능
	/// 연산자로 대소 비교 가능. (== != > < >= <=)
	
	/// set 멤버 함수
	int n = 100;			// 
	int index = 0, k = 0;
	set<int>::iterator iter, start, end;	// 반복자 3개 선언

	set<int> s;				// 기본

	s.begin();				// 첫번째 원소를 가리킨다. (iterator와 함께 사용)

	s.end();				// 마지막의 "다음"을 가리킨다. (iterator와 함께 사용)

	s.rbegin();				// reverse begin (거꾸로해서 첫번째 원소를 가리킨다.) (iterator와 함께 사용)

	s.rend();				// reverse end (거꾸로해서 마지막의 "다음"을 가리킨다.) (iterator와 함께 사용)


	// 데이터 처리

	s.clear();				// 모든 원소를 제거

	s.count(k);				// 원소 k의 갯수를 반환
							// set에서는 0, 1만 반환 (set에는 중복 원소가 없기 때문이다.) -> multiset에서 중복 키값이 가능하기 때문에 사용됨.

	s.empty();				// set s가 비었으면 true 리턴

	s.insert(k);			// 원소 k를 삽입한다.
							// 삽입 시에 자동으로 정렬된 위치에 삽입된다.
							// 삽입 성공/실패에 대한 리턴으로 확인 가능 (리턴값은 pair<iterator, bool> 구조로 나오게 됨.)
							// pair<iterator, bool>에서 pair.first는 삽입한 원소를 가리키는 반복자이고, pair.second는 성공(true), 실패(false)를 나타낸다.

	s.insert(iter, k);		// iter가 가리키는 위치부터 k를 삽입할 위치를 탐색하여 삽입한다.
							// ((많이 사용하지는 않지만, 위치를 알고 있다면 빠르게 탐색 가능))

	s.erase(iter);			// iter가 가리키는 원소를 제거한다.
							// 삭제한 원소의 다음 원소를 가리키는 Iterator를 반환한다.

	s.erase(start, end);	// [start, end) 범위의 원소를 모두 제거한다. (start부터 end의 앞까지 제거)

	s.find(k);				// 원소 k를 가리키는 반복자를 반환한다.
							// 원소 k가 없다면, s.end()와 같은 반복자를 반환한다.

	set<int> s5;
	set<int> s6;
	s6.swap(s5);			// s5와 s6의 원소만 바꾼다.

	s.upper_bound(k);		// 원소가 여러개라는 상황에서 끝나는 구간의 반복자 - multiset에서 사용할 예정
	s.lower_bound(k);		// 원소가 여러개라는 상황에서 시작 구간의 반복자 - multiset에서 사용할 예정
	s.equal_range(k);		// 원소 k가 시작하는 구간과 끝나는 구간의 반복자를 pair 객체를 반환한다. - multiset에서 사용할 예정
							// upper_bound(k) + lower_bound(k) 가 합쳐진 멤버 변수

	s.value_comp();			// 
	s.key_comp();			// 정렬 기준 조건자를 반환한다. set 컨테이너에서는 두개의 함수 반환형이 같다. - ((set에선 잘 안쓰임.))

	s.size();				// 원소의 갯수를 리턴

	s.max_size();			// 최대 사이즈 (남은 메모리 크기)를 반환한다.

	return 0;
}

// --------------------------------------------------

/// 예제
/// insert(), insert(중복), find(존재), find(존재안함)

#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;

	s.insert(40);
	s.insert(10);
	s.insert(80);
	s.insert(30);
	s.insert(70);
	s.insert(60);
	s.insert(20);
	s.insert(50);

	set<int>::iterator iter;

	// 확인 출력
	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// --------------------------------------------------

	// 중복값 넣어보기 -> ((중복값은 하나만 남는다.))
	s.insert(20);

	// 확인 출력
	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// --------------------------------------------------

	// 존재하는 원소 찾기
	iter = s.find(30);

	if (iter != s.end())
	{
		cout << *iter << "이 존재한다." << endl;
	}
	else
	{
		cout << "해당 원소는 존재하지 않는다." << endl;
	}

	// --------------------------------------------------

	// 존재하지 않는 원소 찾기
	iter = s.find(333);

	if (iter != s.end())
	{
		cout << *iter << " 이 존재한다." << endl;
	}
	else
	{
		cout << "해당 원소는 존재하지 않는다." << endl;
	}

	return 0;
}
*/

//
//  6_STL_멀티셋.cpp
//  CppProject
//
//  Created by 오나현 on 01/03/25.
//

/*
/// Multiset Container
/// set과 구별되는 multiset의 가장 큰 특징은 key 값이 중복된다는 점이다.

/// (예시) 인벤토리.. (pair 처리)
/// 1. 소 HP 포션
/// 2. 중 HP 포션
/// 3. 대 HP 포션

/// 나머지 연산, 생성, 멤버 함수는 동일하다. (set container 과 동일)

/// 특징
/// set container 와 같이 key 값을 사용한다.
/// set container 와 달리 중복된 key 값을 저장할 수 있다.
/// 원소를 삽입하면 자동으로 정렬된다.

// --------------------------------------------------

/// Multiset 사용법

#include <iostream>
#include <set>		// <multiset> 아니고 <set> 헤더파일 사용

using namespace std;

int main()
{
	// 선언 예시
	multiset<int> ms;
	multiset<vector<int>> ms;

	// multiset 의 생성자와 연산자
	// set 과 동일

	// multiset 의 멤버 변수
	// set 과 동일

	// set 과 다른 부분
	// [1]
	// ms.insert(k); 시 set 에서는 insert의 리턴값이 pair 객체로 나왔지만,
	// multiset 에서는 중복이 가능하므로, insert의 return 값이 삽입한 원소 k의 위치를 가리키는 반복자이다.
	// [2]
	// set 에서 의미 없게 사용되던,
	// s.upper_bound, s.lower_bound, s.equal_range 멤버 함수가
	// multiset 에서는 좀 더 유용하게 사용된다.

	return 0;
}

// --------------------------------------------------

/// 예제
/// insert, count

#include <iostream>
#include <set>

using namespace std;

int main()
{
	multiset<int> ms;

	ms.insert(9);
	ms.insert(13);
	ms.insert(5);
	ms.insert(7);
	ms.insert(3);
	ms.insert(1);
	ms.insert(11);
	ms.insert(15);

	multiset<int>::iterator iter;

	// 전체 확인 출력
	for (iter = ms.begin(); iter != ms.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 원소 확인 출력
	cout << "ms.count(11) : " << ms.count(11) << endl << endl;

	// --------------------------------------------------

	// 원소 삽입 (3, 11, 11)
	ms.insert(3);
	ms.insert(11);
	ms.insert(11);

	// 확인 출력
	for (iter = ms.begin(); iter != ms.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 원소 확인 출력
	cout << "ms.count(11) : " << ms.count(11) << endl << endl;

	return 0;
}

// --------------------------------------------------

/// 예제
/// upper_bound, lower_bound

#include <iostream>
#include <set>

using namespace std;

int main()
{
	multiset<int> ms;

	ms.insert(9);
	ms.insert(13);
	ms.insert(5);
	ms.insert(11);
	ms.insert(7);
	ms.insert(11);
	ms.insert(3);
	ms.insert(1);
	ms.insert(11);
	ms.insert(15);

	multiset<int>::iterator iter;

	// 전체 확인 출력
	for (iter = ms.begin(); iter != ms.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 원소 확인 출력
	cout << "ms.count(11) : " << ms.count(11) << endl << endl;

	// --------------------------------------------------

	// 이해를 돕기 위해 추가 선언!
	multiset<int>::iterator start, end;

	// key 값 11이 처음 나온 부분 [폐구간]
	start = ms.lower_bound(11);
	cout << "lower_bound(11) : " << *start << endl;

	// key 값 11이 마지막 부분의 다음 (개구간)
	end = ms.upper_bound(11);
	cout << "upper_bound(11) : " << *end << endl;

	// 같은 키 값(11)을 가진 부분만 출력 가능 (영역 부분 처리)
	for (start; start != end; start++)
	{
		cout << *start << " / ";
	}
	cout << endl << endl;

	return 0;
}

// --------------------------------------------------

/// 예제
/// equal_range (pair 구조)
/// first 는 lower_bound(), second 는 upper_bound() 와 같이 동작한다고 생각하면 된다.

#include <iostream>
#include <set>

using namespace std;

int main()
{
	multiset<int> ms;

	ms.insert(9);
	ms.insert(13);
	ms.insert(5);
	ms.insert(11);
	ms.insert(7);
	ms.insert(11);
	ms.insert(3);
	ms.insert(1);
	ms.insert(11);
	ms.insert(15);
	ms.insert(11);
	ms.insert(11);

	multiset<int>::iterator iter;

	// 전체 확인 출력
	for (iter = ms.begin(); iter != ms.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 원소 확인 출력
	cout << "ms.count(11) : " << ms.count(11) << endl << endl;

	// --------------------------------------------------

	// pair<iter, iter> 를 통해 key = 11 의 equal_range() 값을 받는다.
	//pair<multiset<int>::iterator, multiset<int>::iterator> equal_pair;
	//equal_pair = ms.equal_range(11);
	pair<multiset<int>::iterator, multiset<int>::iterator> equal_pair = ms.equal_range(11);	// 위와 같은 코드

	// 확인 출력
	for (iter = equal_pair.first; iter != equal_pair.second; iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	return 0;
}
*/

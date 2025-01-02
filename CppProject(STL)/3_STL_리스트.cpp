//
//  3_STL_리스트.cpp
//  CppProject
//
//  Created by 오나현 on 12/31/24.
//

/*
/// List Container
/// C++의 List는 더블 링크드 리스트(Double Linked List)와 구조가 같다.
/// 노드 기반 컨테이너

/// 장점 : 정렬, 합치기, 이어 붙이기(sort, merge, splice)
/// 단점 : 임의 점근 반복자 사용 불가능 (at(), [] 사용 불가능하다는 말이다.)
/// 대신, 탐색에는 무조건 양방향 반복자 사용 (++, --)

/// push_front(), pop_front(), push_back(), pop_back(); List 양 끝에서 사용 가능!!
/// insert(), erase(); 멤버 함수를 통해서 노드 중간에 삽입 & 삭제가 용이하다!! (좋다!!)

// --------------------------------------------------

/// List의 사용

#include <iostream>
#include <list>			// list 사용을 위한 헤더 파일

using namespace std;

int main()
{
	/// list 선언
	/// list의 생성자와 연산자
	list<int> lt1;			// 비어있는 lt1 생성
	list<int> lt2(5);		// 기본값이 0으로 초기화된, 5개의 원소를 가진 lt2 생성
	list<int> lt3(5, 2);	// 기본값이 2으로 초기화된, 5개의 원소를 가진 lt3 생성
	list<int> lt4(lt3);		// lt4는 lt3를 복사하여 생성 (깊은 복사)

	/// 비교 가능
	/// 연산자로 대소 비교 가능. (== != > < >= <=)

	/// list 멤버 함수
	int n = 100;			// 
	int index = 0, k = 0;
	list<int>::iterator iter;

	list<int> lt;			// 기본

	lt.assign(5, 2);		// 2의 값으로 5개의 원소 할당


	lt.front();				// 첫번째 원소를 참조

	lt.back();				// 마지막 원소를 참조

	lt.clear();				// 모든 원소를 제거


	lt.push_front(3);		// 첫번째 원소 앞에 원소 3을 삽입

	lt.pop_front();			// 첫번째 원소를 제거

	lt.push_back(7);		// 마지막 원소 뒤에 원소 7을 삽입

	lt.pop_back();			// 마지막 원소를 제거


	lt.begin();				// 첫번째 원소를 가리킨다. (iterator와 함께 사용)

	lt.end();				// 마지막의 "다음"을 가리킨다. (iterator와 함께 사용)

	lt.rbegin();			// reverse begin (거꾸로해서 첫번째 원소를 가리킨다.) (iterator와 함께 사용)

	lt.rend();				// reverse end (거꾸로해서 마지막의 "다음"을 가리킨다.) (iterator와 함께 사용)


	lt.insert(iter, k);		// iter가 가리키는 위치에 원소 k를 삽입한다.
							// 삽입한 원소를 가리키는 Iterator를 반환한다.

	lt.erase(iter);			// iter가 가리키는 원소를 제거한다.
							// 삭제한 원소의 다음 원소를 가리키는 Iterator를 반환한다.

	lt.remove(k);			// k와 같은 원소를 모두 제거한다. (편한 기능!)

	lt.remove_if(Predicate);	// 단항 조건자 Predicate에 해당하는 원소를 모두 제거한다. (더욱 편한 기능!)

	lt.reverse();			// 원소들의 순차열을 뒤집는다.

	lt.sort();				// 모든 원소를 오름차순(디폴트)으로 정렬한다.
							// 파라미터 이항 조건자가 올 수 있다. 정렬 기준을 바꿀 수 있다. (내림차순)

	list<int> lt5;
	list<int> lt6;
	lt6.swap(lt5);			// lt5와 lt6의 원소만 바꾼다.

	list<int>::iterator iter2;
	lt2.splice(iter2, lt1);						// lt2에서 iter2가 가리키는 곳에 lt1의 모든 원소를 잘라 붙인다.
	lt2.splice(iter2, lt1, iter);				// lt2에서 iter2가 가리키는 곳에 lt1의 iter가 가리키는 원소를 잘라 붙인다.
	lt2.splice(iter2, lt1, iter1_1, iter1_2);	// lt2에서 iter2가 가리키는 곳에 lt1의 iter1_1에서 iter1_2까지의 원소를 잘라 붙인다. (범위 처리)

	lt.unique();			// 인접한 (양옆의) 원소가 같으면 유일하게 만들어준다. (하나만 빼고 삭제해준다.)

	lt2.merge(lt1);			// lt1을 lt2 내부로 합병 & 정렬한다. 기준은 오름차순 (디폴트)
							// 두 번째 파라미터 이항 조건자가 올 수 있다. 정렬 기준을 바꿀 수 있다. (내림차순)
	

	lt.size();				// 원소의 갯수를 리턴


	/// list에만 존재하는 remove, remove_if, sort, splice, unique, merge !!!

	return 0;
}

// --------------------------------------------------

/// 예제
/// remove & remove_if

#include <iostream>
#include <list>

using namespace std;

// 조건 체크 함수 : 100과 200 사이이면 true를 리턴
bool predicate(int num)
{
	return num >= 100 && num <= 200;
}

int main()
{
	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(108);
	lt.push_back(60);
	lt.push_back(10);
	lt.push_back(100);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);
	lt.push_back(109);
	lt.push_back(30);
	lt.push_back(220);
	lt.push_back(10);

	list<int>::iterator iter;

	// 확인 출력
	for (iter = lt.begin(); iter != lt.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// predicate 함수가 참이면 제거한다.
	// 100 ~ 200 사이의 원소를 제거한다.
	lt.remove_if(predicate);

	// 확인 출력
	for (iter = lt.begin(); iter != lt.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 10인 원소 제거
	lt.remove(10);

	// 확인 출력
	for (iter = lt.begin(); iter != lt.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	return 0;
}

// --------------------------------------------------

/// 예제
/// unique & sort

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<string> lt;

	lt.push_back("b");
	lt.push_back("c");
	lt.push_back("a");
	lt.push_back("q");
	lt.push_back("a");
	lt.push_back("a");
	lt.push_back("a");
	lt.push_back("k");
	lt.push_back("j");
	lt.push_back("p");
	lt.push_back("q");
	lt.push_back("o");
	lt.push_back("e");
	lt.push_back("a");
	lt.push_back("a");

	list<string>::iterator iter;

	// 확인 출력
	for (iter = lt.begin(); iter != lt.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// unique 멤버 함수를 통해 붙어있는 인자 삭제
	lt.unique();

	// 확인 출력
	for (iter = lt.begin(); iter != lt.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// sort 기본값 오름차순 정렬
	// string은 알파벳순, 가나다순으로 정렬
	lt.sort();

	// 확인 출력
	for (iter = lt.begin(); iter != lt.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// sort 내림차순
	lt.sort(greater<string>());

	// 확인 출력
	for (iter = lt.begin(); iter != lt.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	return 0;
}

// --------------------------------------------------

/// 패킷의 오류 데이터를 위한 처리 : unique()

// --------------------------------------------------

/// 예제
/// splice

#include <iostream>
#include <string>
#include <list>
#include <functional>

using namespace std;

int main()
{
	list<string> lt1;

	lt1.push_back("a");
	lt1.push_back("b");
	lt1.push_back("c");
	lt1.push_back("d");
	lt1.push_back("e");

	list<string> lt2;

	lt2.push_back("X");
	lt2.push_back("Y");
	lt2.push_back("Z");

	list<string>::iterator iter;

	// 확인 출력 (lt1)
	cout << "[lt1] ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl;

	// 확인 출력 (lt2)
	cout << "[lt2] ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// --------------------------------------------------

	iter = lt2.begin();
	iter++;

	// lt2의 iter 부분부터 lt1을 잘라서 붙인다.
	lt2.splice(iter, lt1);

	// 확인 출력 (lt1)
	cout << "[lt1] ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl;

	// 확인 출력 (lt2)
	cout << "[lt2] ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	return 0;
}

// --------------------------------------------------

/// 예제
/// merge

#include <iostream>
#include <string>
#include <list>
#include <functional>

using namespace std;

int main()
{
	list<int> lt1;

	lt1.push_back(100);
	lt1.push_back(200);
	lt1.push_back(300);
	lt1.push_back(400);
	lt1.push_back(500);

	list<int> lt2;

	lt2.push_back(111);
	lt2.push_back(444);
	lt2.push_back(555);

	list<int>::iterator iter;

	// 확인 출력 (lt1)
	cout << "[lt1] ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl;

	// 확인 출력 (lt2)
	cout << "[lt2] ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// --------------------------------------------------

	// merge (sort까지 한번에..)
	lt2.merge(lt1);

	// 확인 출력 (lt1)
	cout << "[lt1] ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl;

	// 확인 출력 (lt2)
	cout << "[lt2] ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	return 0;
}
*/

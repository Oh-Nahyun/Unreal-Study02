//
//  01_Sort알고리즘.cpp
//  CppProject
//
//  Created by 오나현 on 01/14/25.
//

/*
/// Sort Algorithm
/// C++ STL 에서 제공하는 알고리즘 중 하나이다.

/// sort algorithm 은 <algorithm> 헤더파일을 사용한다.
/// sort(start, end) 를 이용하여 (start, end)의 범위에 있는 인자(element)를 오름차순으로(default) 정렬해 주는 함수
/// start를 포함하고 end를 포함하지 않는 구간 (iterator를 생각하면 된다.)

/// quick sort(퀵정렬)을 기반으로 함수가 구현되어 있다. 평균 시간 복잡도 nlogn 이다.
/// 따로 quick sort를 구현할 필요 없이 C++ STL 에서 제공해 주는 sort 함수를 이용하면 편리하게 사용(정렬)할 수 있다.

// --------------------------------------------------

/// 원형 및 사용 방법
template <typename T>
void sort(T start, T end);

template <typename T>
void sort(T start, T end, Compare comp);		// 3번째 인자를 넣지 않으면 default 로 오름차순이 된다.

sort(arr, arr + n);
sort(v.begin(), v.end());
sort(v.begin(), v.end(), compare);				// 사용자 정의 함수 사용
sort(v.begin(), v.end(), greater<자료형>());	// 내림차순
sort(v.begin(), v.end(), less<자료형>());		// 오름차순

// --------------------------------------------------

/// 배열 sort (오름차순)

#include <iostream>
#include <algorithm>

using namespace std;

void Print(int* arr)
{
	cout << "arr[i] : ";

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl << endl;
}

int main()
{
	int arr[10] = { 3, 7, 2, 4, 1, 0, 9, 8, 5, 6 };

	// 확인 출력
	Print(arr);

	// --------------------------------------------------

	// 디폴트 오름차순으로 정렬
	sort(arr, arr + 10);

	// 확인 출력
	Print(arr);

	return 0;
}

// --------------------------------------------------

/// 벡터 컨테이너 정렬 (내림차순)

#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

void Print(vector<int> &v)	// 레퍼런스로 벡터 가져오기
{
	cout << "vector : ";

	for (int i = 0; i < 10; i++)
	{
		cout << v[i] << ", ";
	}
	cout << endl << endl;
}

int main()
{
	// 난수 생성을 위한 작업
	srand((int)time(NULL));

	// 선언
	vector<int> v;
	int n = 10;

	// 벡터에 임의의 값 삽입
	for (int i = 0; i < n; i++)
	{
		v.push_back(rand() % n);
	}

	// 확인 출력
	Print(v);

	// --------------------------------------------------

	// 내림차순 정렬
	sort(v.begin(), v.end(), greater<int>());

	// 확인 출력
	Print(v);

	return 0;
}
*/

// --------------------------------------------------

/// 비교(Compare) 함수를 만들어서 Sort

#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

class Student
{
public:
	string name;
	int age;
	Student(string name, int age) : name(name), age(age) {}
};

void Print(vector<Student>& v)
{
	cout << "Student : ";

	for (int i = 0; i < 5; i++)
	{
		cout << "[ " << v[i].name << ", " << v[i].age << " ] ";
	}
	cout << endl << endl;
}

// 비교 함수
bool compare(Student a, Student b)
{
	if (a.name == b.name)		// 이름이 같은 경우
	{
		return a.age < b.age;	// 나이가 작은 순으로 출력
	}
	else						// 이름이 다른 경우
	{
		return a.name < b.name;	// 이름 순으로 출력
	}
}

int main()
{
	vector<Student> v;

	v.push_back(Student("ccc", 10));
	v.push_back(Student("bca", 24));
	v.push_back(Student("aaa", 11));
	v.push_back(Student("ccc", 8));		// 예시 > 이름이 같으니 나이 기준 오름차순
	v.push_back(Student("vvv", 10));

	// 확인 출력
	Print(v);

	// --------------------------------------------------

	// 정렬
	sort(v.begin(), v.end(), compare);

	// 확인 출력
	Print(v);

	return 0;
}

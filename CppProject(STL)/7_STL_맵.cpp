//
//  7_STL_맵.cpp
//  CppProject
//
//  Created by 오나현 on 01/06/25.
//

/*
/// Map Container
/// key 값과 value 가 쌍으로 저장되는 방식을 사용하는 map!!!

/// std::vector, std::map 을 가장 많이 사용한다.

/// map 은 key 와 value 로 이루어져 있으며, 이는 pair 객체 형태로 저장된다.
/// Unique Key - key 는 고유한 값이므로 중복이 불가능하다. (중복은 multimap 에서 처리)
/// Ordered - map 도 set 과 마찬가지로 삽입과 동시에 자동으로 정렬이 된다.
/// Allocator - 저장 공간의 필요에 따라서 allocator 객체를 사용한다. (동적 할당)

// --------------------------------------------------

/// Map 사용법

#include <iostream>
#include <string>
#include <map>		// <map> 헤더파일

using namespace std;

int main()
{
    // 선언 예시
    //map<int, int> m1;
    //map<string, int> m2;

    // map 에 삽입을 하기 위한 insert 는 pair 객체를 인자로 받아야 한다. (key, value 는 쌍을 이루기 때문)
    //m1.insert(pair<int, int>(10, 20));
    //m2.insert(pair<string, int>("name", 20));

    // --------------------------------------------------

    // map의 생성자와 연산자
    map<int, int> m;    // 기본 선언 방법
    map<int> m(pred);   // pred 를 통해 정렬 기준(오름차순, 내림차순)을 세운다.
    map<int> m2(ma);    // m1 을 복사한 m2 를 생성한다.

    // 연산자 사용 가능 (==, !=, <, >, <=, >=)

    // 연산자 m[key] = val; 을 통해서 원소 (key, value) 를 추가 또는 수정이 가능하다.

    // --------------------------------------------------

    // map의 멤버 함수
    // set 을 참조해라.
    m.insert(k);    // k는 pair 객체이다.

    m.upper_bound(k);   // multimap 예제 참고
    m.lower_bound(k);
    m.equal_range(k);

    return 0;
}

// --------------------------------------------------

/// 예제
/// insert, 순회 접근 방법

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;

    m.insert(pair<int, string>(40, "aaa"));
    m.insert(pair<int, string>(35, "bbb"));
    m.insert(pair<int, string>(10, "ccc"));
    m.insert(pair<int, string>(90, "ddd"));
    m.insert(pair<int, string>(65, "eee"));
    m.insert(pair<int, string>(20, "fff"));
    m.insert(pair<int, string>(50, "ggg"));

    map<int, string>::iterator iter;

    // 접근 방법 [1]
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        cout << "[ " << iter->first << ", " << iter->second << " ]";
    }
    cout << endl << endl;

    // 접근 방법 [2]
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        cout << "[ " << (*iter).first << ", " << (*iter).second << " ]";
    }
    cout << endl << endl;

    return 0;
}

// --------------------------------------------------

/// 예제
/// operator 연산자 사용법

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, int> m;

    m[9] = 109;
    m[3] = 103;
    m[13] = 113;
    m[15] = 115;
    m[1] = 101;
    m[7] = 107;
    m[5] = 105;
    m[11] = 111;

    map<int, string>::iterator iter;

    // 접근 방법 (확인)
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        cout << "[ " << iter->first << ", " << iter->second << " ]";
    }
    cout << endl << endl;

    // 수정
    m[11] = 999;
    m[1] = 888;

    // 접근 방법 (확인)
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        cout << "[ " << iter->first << ", " << iter->second << " ]";
    }
    cout << endl << endl;

    // 사이즈 출력
    cout << "size : " << m.size() << endl;

    return 0;
}
*/

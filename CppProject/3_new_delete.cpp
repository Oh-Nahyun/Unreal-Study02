//
//  3_new_delete.cpp
//  CppProject
//
//  Created by 오나현 on 12/17/24.
//

// CProject_Study16(동적메모리).cpp 파일 참고

/*
/// 동적 메모리 할당 (CProject)
/// malloc & free에 대한 내용

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentNumber = 0;  // 학생 수
    int* arrMath = nullptr; // 학생들의 수학 점수 (nullptr : 포인터 초기화)
    int totalScore = 0;     // 학생들의 수학 총점

    printf("학생 수를 입력해주세요. : ");
    scanf_s("%d", &studentNumber);

    // 메모리 할당
    arrMath = (int*)malloc(studentNumber * sizeof(int));    // arrMath[studentNumber]을 배열처럼 사용 가능

    // 점수 입력
    for (int i = 0; i < studentNumber; i++)
    {
        printf("학생 %d번의 수학 점수를 입력하세요. : ", i + 1);
        scanf_s("%d", &arrMath[i]);
    }

    // 수학 점수 총점 구하기
    for (int i = 0; i < studentNumber; i++)
    {
        totalScore += arrMath[i];
    }

    // 출력
    printf("전체 학생의 수학 점수 총점 : %d\n", totalScore);
    printf("전체 학생의 수학 점수 평균 : %f\n", (float)(totalScore / studentNumber));

    // 메모리 할당 해제 **************************************************
    free(arrMath);

    return 0;
}

// --------------------------------------------------

/// C++ 객체 지향 : 객체의 사이즈를 자동 할당해주자.
/// 객체 지향 프로그래밍 : 생성과 삭제가 빈번하게 일어난다.

/// new & delete
/// 위 예제(C)를 C++로 변경하기

#include <iostream>

using namespace std;

int main()
{
    int studentNumber = 0; 
    int* arrMath = nullptr;
    int totalScore = 0;    

    cout << "학생 수를 입력해주세요. : ";
    cin >> studentNumber;

    // 메모리 할당
    arrMath = new int[studentNumber];

    // 점수 입력
    for (int i = 0; i < studentNumber; i++)
    {
        cout << "학생  " << i + 1 << "번의 수학 점수를 입력하세요. : ";
        cin >> arrMath[i];
    }

    // 수학 점수 총점 구하기
    for (int i = 0; i < studentNumber; i++)
    {
        totalScore += arrMath[i];
    }

    // 출력
    cout << "전체 학생의 수학 점수 총점 : " << totalScore << endl;
    cout << "전체 학생의 수학 점수 평균 : " << totalScore / studentNumber << endl;

    // 메모리 할당 해제 **************************************************
    delete[] arrMath;

    return 0;
}
*/

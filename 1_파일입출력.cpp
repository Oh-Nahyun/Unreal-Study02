//
//  1_파일입출력.cpp
//  CProject
//
//  Created by 오나현 on 12/12/24.
//

/// 문서에 데이터 저장하기
/// a. txt 파일에 내용을 기록한다.

/// 파일의 종류
/// 1. 바이너리 파일 (binary file)    // 010101111 2진수 or 16진수 // 데이터와 같이 암호화해야하는 파일
/// 2. 텍스트 파일 (text file)           // 사람이 알아볼 수 있는 문자열로 이루어진 파일

/// 파일 입출력
/// fopen, fputs, fget, fgetchar, fclose 명령어
/// C언어에서 스트림(Stream)은 바이크들이 순서대로 입출력 되는 논리적인 장치
/// 함수 원형 : FILE* fopen(char const* _filename, char const* _Mode);
/// fopen의 _Mode 종류
/// r = read / 읽기 모드
/// w = write / 쓰기 모드
/// t = text / 텍스트 모드
/// b = binary / 바이너리 모드 (2진 모드)
/// a = add / 추가 모드
/// + = 읽기/쓰기 모드로 'r', 'w', 'a'와 함께 사용 (r+, w+, a+)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
/// 텍스트 파일 만들기
int main()
{
    FILE* fp;
    
    //fp = fopen("a.txt", "w"); // 오픈
    fp = fopen("a.txt", "wt");  // 오픈 & 쓰기 & 텍스트 모드
    
    if (fp == NULL)
    {
        printf("Write Error!\n");
        return 0;
    }
    
    fputs("Hello World!\n", fp);
    fclose(fp);                 // [중요] 무조건 닫아야한다.
    
    return 0;
}

/// 바이너리 파일 만들기
int main()
{
    char buffer[20] = {};
    char temp[20] = "File I/O binary";
    
    // Save
    FILE* handleWrite = fopen("test.dat", "wb");
    fwrite(temp, 1, 15, handleWrite);
    fclose(handleWrite);
    
    // Load
    FILE* handleRead = fopen("test.dat", "rb");
    fread(buffer, 1, 15, handleRead);
    printf("%s", buffer);
    fclose(handleRead);
    
    return 0;
}

/// 함수 설명 (파일 입출력 함수)
//int fputc(int c, FILE* stream);
//int fputs(const char* string, FILE* stream);
//char* fgets(char* string, int n, FILE* stream); // n : 위치
//int fprintf(FILE* stream, const char* string, ...);
//int fscanf(FILE* stream, const char* string, ...);
//int fclose(FILE* stream);

/// 파일 위치 지정자
// a.txt = "Hello World!"
int main()
{
    FILE* fp = fopen("a.txt", "r");
    fgetc(fp); // 'H'를 읽어온다.
    fgetc(fp); // 'e'
    fgetc(fp); // 'l'
    fgetc(fp); // 'l'
    // "Hello World!"의 o를 가리키고 있다.
    printf("%c\n", fgetc(fp)); // 'o' 출력
    
    fseek(fp, 0, SEEK_SET); // 파일의 지정자를 맨 앞으로 보낸다.
                            // SEEK_CUR : 파일 포인터의 현재 위치
                            // SEEK_END : 파일 끝
                            // SEEK_SET : 파일 시작
    printf("%c\n", fgetc(fp)); // 'H'를 출력
    
    fclose(fp);
    
    return 0;
}

/// 파일을 입력 받아서 (영어) 소문자를 대문자로, 대문자를 소문자로 변환하는 프로그램
/// 힌트 : 아스키코드 사용
int main()
{
//    FILE* fp;
//    fp = fopen("sen.txt", "wt");
//    if (fp == NULL)
//    {
//        printf("File Error!\n");
//        return 0;
//    }
//    fputs("AAAAABBBBBaaaaabbbbb\n", fp);
//    fclose(fp);
    
    // --------------------------------------------------
    // 위쪽 코드는 원래 없고, 직접 텍스트 파일을 생성해준다.
    // --------------------------------------------------
    
    FILE* fp = fopen("sen.txt", "r+");
    char c;
    
    if (fp == NULL)
    {
        printf("파일 열기 실패!\n");
        return 0;
    }
    
    while ((c = fgetc(fp)) != EOF)      // 파일의 끝까지 읽기
    {
        if (c >= 65 && c <= 90)         // 대문자인 경우 (65 ~ 90)
        {
            // 한칸 뒤로 가서
            fseek(fp, -1, SEEK_CUR);
            
            // 소문자로 바뀐 값을 저장
            fputc(c + 32, fp);
            
            // 원래 위치로
            fseek(fp, 0, SEEK_CUR);
        }
        else if (c >= 97 && c <= 122)   // 소문자인 경우 (97 ~ 122)
        {
            // 한칸 뒤로 가서
            fseek(fp, -1, SEEK_CUR);
            
            // 대문자로 바뀐 값을 저장
            fputc(c - 32, fp);
            
            // 원래 위치로
            fseek(fp, 0, SEEK_CUR);
        }
        // printf("%c", c);
    }
    
    fclose(fp);
    
    return 0;
}
 */

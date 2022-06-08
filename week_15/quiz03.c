// 원통의 겉넓이를 구하시오

// - 입력 : 정수 (반지름 r 높이 h)
// - 입력은 스페이스로 구분한다.
// - 출력 : 소숫점 2째자리까지 표현 (3째자리 반올림)
// - 구조체와 사용자 정의 함수를 1개 이상 만든다.
// - scanf() 사용
// A = 2πr2 + 2πrh

#include <stdio.h>
#define _USE_MATH_DEFINES // 파이 값을 사용하기 위해 써 준다.
#include <math.h>

typedef struct mys MYS; // typedef 선언

struct mys //구조체틀 생성
{ 
    int r; // 반지름
    int h; // 높이  
    float s; // 겉넓이
};

float cal(int x_r, int x_h){
    return (2*M_PI*pow(x_r, 2)) + (2*M_PI*x_r*x_h); // 원기둥 겉넓이 계산
}

void formula(){
    MYS mys1;
    scanf("%d %d", &mys1.r, &mys1.h); // r과 h를 입력받아 저장한다.
    mys1.s =  cal(mys1.r, mys1.h); //cal함수로 계산한 값을 mys1.s에 저장한다.
    printf("%f", mys1.s); // 소수점 2자리 까지 반올림 해 출력한다.
}

void main(){
    formula();
}
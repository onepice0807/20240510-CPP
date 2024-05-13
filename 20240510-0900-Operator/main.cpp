#include <iostream>

using namespace std;

int main() {
	int a;
	int b = 30;
	float c = 3.4f;

	a = 20;

	// 기본 데이터 타입 컴파일러가 자동으로 형병환 시킴
	// 묵시적 형변환
	// 실수값을 정수형 변수에 대입할때 묵시적 형변환을 하면 안됩니다.
	a = c;

	a = (int)c; // 명시적 형변환

	c = a; // 반대의 경우 손실이 발생하지 않기 때문에 묵시적 형병환 가능

	// 대입연산자 축약형
	a += 1;
	// a = a + 1;
	cout << " a= " << a << endl;

	a /= 2;
	// a = a / 2;
	cout << " a= " << a << endl;

	return 0;
}
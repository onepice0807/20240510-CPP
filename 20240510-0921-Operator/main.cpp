#include <iostream>

using namespace std;

int main() {
	int a;

	a = 20;

	&a; // & 주소연산자 a변수의 할당받은 메모리 주소값을 돌려줍니다.

	cout << "&a = " << &a << endl;

	int* pa; // 포인터 형지정자
	pa = &a;

	int** ppa;
	ppa = &pa;

	**ppa; // 포인터연산자
	**&pa;
	*pa;
	*&a;
	a; // 위의 모든것은 a를 나타내는 것

	printf("&**ppa = %p\n", &**ppa);
	cout << "&**ppa = " << &**ppa << endl;
	printf("&**&pa = %p\n", &**&pa);
	cout << "&**&pa = " << &**&pa << endl;
	printf("&*pa = %p\n", &*pa);
	cout << "&*pa = " << &*pa << endl;
	printf("&*&a = %p\n", &*&a);
	cout << "&*&a = " << &*&a << endl;
	printf("\n\n");
	**ppa = 4000;
	printf("**ppa = %d\n", **ppa);
	cout << "**ppa = " << **ppa << endl;
	printf("**&pa = %d\n", **&pa);
	cout << "**&pa = " << **&pa << endl;
	printf("*pa = %d\n", *pa);
	cout << "*pa = " << *pa << endl;
	printf("*&a = %d\n", *&a);
	cout << "*&a = " << *&a << endl;
	printf("a = %d\n", a);
	cout << "a = " << a << endl;

	return 0;
}
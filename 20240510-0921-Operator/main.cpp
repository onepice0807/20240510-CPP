#include <iostream>

using namespace std;

int main() {
	int a;

	a = 20;

	&a; // & �ּҿ����� a������ �Ҵ���� �޸� �ּҰ��� �����ݴϴ�.

	cout << "&a = " << &a << endl;

	int* pa; // ������ ��������
	pa = &a;

	int** ppa;
	ppa = &pa;

	**ppa; // �����Ϳ�����
	**&pa;
	*pa;
	*&a;
	a; // ���� ������ a�� ��Ÿ���� ��

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
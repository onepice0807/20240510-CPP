#include <iostream>
#include <string>

using namespace std;

// �ֹι�ȣ, ��������, �ּ�, �̸�, ��ȭ��ȣ, ����, ��ȥ����, ����

// ĸ��ȭ : Ŭ���� Ű����� ����Ÿ�� ���� ��.
// class Ŭ������{
//   Data��;
// };

// ĸ��ȭ -> Ŭ������ ����Ÿ Ÿ�� Son�� ����.
// ĸ��ȭ�� �⺻ ��å�� ��������.
// ����������
// Ŭ�����ȿ� ����� ���� ������ �����Ҷ� ����մϴ�.
// private (�⺻) Ŭ������ ����� �����ϴ� ���� ö���� ���ڴ�. �ڽĵ� ���� ����, �ܺο����� ���� ����
// protected : �ڽ��� ������ ���, �ܺο��� ������ ����.
// public : �ܺο��� �����ϴ� ���� ���.

// ��������� �ܺο��� �����ϴ� ���� ������� ����� �մϴ�.(�ǰ����)
// ����Լ��� ���ؼ� �����ϵ��� �ض�.
// ��������� �����Ҷ� ����ϴ� ����Լ��� Set/Get �Լ���� �մϴ�.
// ���� �����ϴ� ����Լ� Set�Լ�
// ���� �ܺη� �����ϴ� �Լ��� Get�Լ�

class Son {
private:
	string juminNum; // �������(�Ӽ�)
	string address;
	string name;
	int age;
	bool sungbyul; // true : ����, false : ����

public:
	void SetJuminNum(string value) { // ����Լ�(�ൿ)
		juminNum = value;
	}

	string GetJuminNum() {
		return juminNum;
	}

	void SetName(string value) {
		name = value;
	}

	string GetName() {
		return name;
	}

	void SetAddress(string value) {
		address = value;
	}

	string GetAddress() {
		return address;
	}

	// ��������� Set/Get�Լ��� ���ؼ� �����ϴ� ���
	// ����� �۾��� ���� ���� �߸������� ��� ��𿡼� �߸�
	// �־����� ã�Ⱑ �����մϴ�.
	// ����Ǵ� ���� ������ ��ȿ�� �˻�, ���Ἲ �˻縦 �Ͽ�
	// �߸��� �����Ͱ� ����Ǵ� ���� ���� �� �ֽ��ϴ�.
	void SetAge(int value) {
		age = value;
	}

	int GetAge() {
		return age;
	}

	void SetSungByul(bool value) {
		sungbyul = value;
	}

	bool GetSungByul() {
		return sungbyul;
	}
};

int main() {
	Son a; // Ŭ���� Ű����� ���� ������ Ÿ���� ������ ��ü

	// Ŭ������ ������ ������ ����� �����Ҷ���
	// .(period)�����ڸ� ����մϴ�.



	/*	
	a.name = "�����";
	a.juminNum = "920711-11111111";
	a.address = "����";
	a.age = 32;
	a.sungbyul = false;
	*/
	
	a.SetName("�����");
	a.SetJuminNum("920711-1111111");
	a.SetAddress("����");
	a.SetAge(32);
	a.SetSungByul(false);

	/*
	cout << " �̸� " << a.name << endl;
	cout << " �ֹι�ȣ " << a.juminNum << endl;
	cout << " �ּ� " << a.address << endl;
	cout << " ���� " << a.age << endl;
	if (a.sungbyul) {
		cout << " ���� : ���� " << endl;
	}
	else {
		cout << " ���� : ���� " << endl;
	}
	*/

	cout << " �̸� " << a.GetName() << endl;
	cout << " �ֹι�ȣ " << a.GetJuminNum() << endl;
	cout << " �ּ� " << a.GetAddress() << endl;
	cout << " ���� " << a.GetAge() << endl;
	if (a.GetSungByul()) {
		cout << " ���� : ���� " << endl;
	}
	else {
		cout << " ���� : ���� " << endl;
	}


	return 0;
}
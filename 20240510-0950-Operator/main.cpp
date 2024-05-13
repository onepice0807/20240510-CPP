#include <iostream>
#include <string>

using namespace std;

// 주민번호, 가족관계, 주소, 이름, 전화번호, 성별, 결혼여부, 나이

// 캡슐화 : 클래스 키워드로 데이타를 묶는 것.
// class 클래스명{
//   Data들;
// };

// 캡슐화 -> 클래스형 데이타 타입 Son을 만듦.
// 캡슐화의 기본 정책은 정보은닉.
// 접근제어자
// 클래스안에 멤버에 대한 접근을 제어할때 사용합니다.
// private (기본) 클래스의 멤버에 접근하는 것을 철저히 막겠다. 자식도 접근 불허, 외부에서도 접근 불허
// protected : 자식은 접근을 허용, 외부에서 접근은 불허.
// public : 외부에서 접근하는 것을 허용.

// 멤버변수는 외부에서 접근하는 것을 허용하지 말라고 합니다.(권고사항)
// 멤버함수를 통해서 접근하도록 해라.
// 멤버변수를 접근할때 사용하는 멤버함수를 Set/Get 함수라고 합니다.
// 값을 변경하는 멤버함수 Set함수
// 값을 외부로 전달하는 함수를 Get함수

class Son {
private:
	string juminNum; // 멤버변수(속성)
	string address;
	string name;
	int age;
	bool sungbyul; // true : 여자, false : 남자

public:
	void SetJuminNum(string value) { // 멤버함수(행동)
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

	// 멤버변수를 Set/Get함수를 통해서 접근하는 경우
	// 디버깅 작업에 좋음 값이 잘못들어오는 경우 어디에서 잘못
	// 넣었는지 찾기가 용이합니다.
	// 저장되는 값의 데이터 유효성 검사, 무결성 검사를 하여
	// 잘못된 데이터가 저장되는 것을 막을 수 있습니다.
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
	Son a; // 클래스 키워드로 만든 데이터 타입의 변수를 객체

	// 클래스형 변수를 가지고 멤버에 접근할때는
	// .(period)연산자를 사용합니다.



	/*	
	a.name = "손흥민";
	a.juminNum = "920711-11111111";
	a.address = "런던";
	a.age = 32;
	a.sungbyul = false;
	*/
	
	a.SetName("손흥민");
	a.SetJuminNum("920711-1111111");
	a.SetAddress("런던");
	a.SetAge(32);
	a.SetSungByul(false);

	/*
	cout << " 이름 " << a.name << endl;
	cout << " 주민번호 " << a.juminNum << endl;
	cout << " 주소 " << a.address << endl;
	cout << " 나이 " << a.age << endl;
	if (a.sungbyul) {
		cout << " 성별 : 여자 " << endl;
	}
	else {
		cout << " 성별 : 남자 " << endl;
	}
	*/

	cout << " 이름 " << a.GetName() << endl;
	cout << " 주민번호 " << a.GetJuminNum() << endl;
	cout << " 주소 " << a.GetAddress() << endl;
	cout << " 나이 " << a.GetAge() << endl;
	if (a.GetSungByul()) {
		cout << " 성별 : 여자 " << endl;
	}
	else {
		cout << " 성별 : 남자 " << endl;
	}


	return 0;
}
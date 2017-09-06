#include <iostream>
using namespace std;

class student{
private:
  string name; // 이름
  int age; // 나이
  int *score; // 3개의 과목의 성적
  double avg; // 평균

public:
  //class안에 메소드 정의만 실행문은 class 밖에 작성할것

  //생성자 이름과 나이 초기화
  student();

  // 소멸자 소멸시 "소멸"출력
  ~student();

  // 정보를 입력하는 메소드
  int input();

  // 정보를 출력하는 메소드
  void printf();

  // 평균을 구하는 메소드
  void getavg();

  // get 메소드

  // set 메소드

}

int main(){

  // 하나의 인스턴스를 생성
  studnet *stu;

  // 생성자 호출

  // 입력
  stu.input();

  // 평균 구하기
  stu.getavg();

  // 출력
  stu.print();

  // 이름을 출력하기

  // 나이를 출력하기

  // 나이를 바꾸기

  // 바뀐 나이 출력하기

  // 소멸자 호출

  return 0;
}

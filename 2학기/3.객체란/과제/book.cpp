#include <iostream>
using namespace std;

class book{
private:
  string name; // 책 이름
  int page; // 페이지수
  int price; // 가격
  int buy; // 구매수

public:
  //class안에 메소드 정의만 실행문은 class 밖에 작성할것

  //생성자 이름과 페이지수 가격 초기화
  // 구매수는 0으로 초기화
  book();

  // 소멸자 소멸시 "소멸"출력
  ~book();

  // 책을 한권을 구매하는 메소드
  // buy가 1 증가한다
  // 안내문도 출력할것
  int buy_book();

  // 정보를 출력하는 메소드
  void print();

  // get 메소드

  // set 메소드
}

// 메소드 작성 필요

int main(){

  // 하나의 인스턴스를 생성
  book  *b; // (수정 필요)

  // b의 정보를 출력
  b->print();

  // b를 5번 구매 하기(수정 필요)
  b->buy_book();

  // b의 정보를 출력
  b->print();

  // 가격 변경

  // 가격 출력

  // 소멸자 생성
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(){
  string *name; // 이름
  int *age; // 나이
  int *score; // 국어 , 영어 점수 입력

  // new로 할당 받기
    name = new string;
    age = new int;
    score = new int[2];

  // 이름 나이 점수 입력
    cin >> *name;
    cin >> *age;
    cin >> score[0];
    cin >> score[1];

  // 이름 나이 점수 출력
    cout << *name << endl;
    cout << *age << endl;
    cout << score[0] << endl;
    cout << score[1] << endl;

  // delete로 반환
    delete name;
    delete age;
    delete[] score;

  return 0;
}

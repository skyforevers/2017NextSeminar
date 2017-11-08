#include <stdio.h>

struct medical{
  // 한 사람의 의료정보
  // 이름
  char name[100];
  // 키
  int height;
  // 몸무게
  int weight;
  // 질병의 유무
  bool disease;
}

// 입력 함수
struct student ScanData(){
  // 코드 입력
}

// 출력 함수
void print(struct student s){
  // 코드 입력
}

// 키 순으로 정렬 출력
void SortHeight(struct medical m){
  // 코드 입력
}

// 몸무게 순으로 정렬 출력
void SortWeight(struct medical m){
  // 코드 입력
}

// 질병이 있는 사람만 걸러서 출력
void HaveDisease(struct medical m){
  // 코드 입력
}

int main(){
  // 구조체 배열 선언
  struct medical mediData[MAX];

  // 입력
  for(int i = 0 ; i < MAX ; i++){
      mediData[i] = ScanData();
  }

  // 출력
  printf("일반 출력\n");
  print(mediData);

  // 정렬 출력
  printf("키가 큰순 출력\n");
  SortHeight(mediData);

  printf("몸무게가 큰순 출력\n");
  SortWeight(mediData);

  printf("질병이 있는 사람출력\n");
  HaveDisease(mediData);
}

//Copyright 2017. Chang-Gun Lee (N.eX.T) all rights reserved.
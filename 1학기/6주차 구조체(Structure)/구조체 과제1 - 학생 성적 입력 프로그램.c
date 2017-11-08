#include<stdio.h>
#define MAX 5
struct student{
  // 학생정보
  // 이름
  char name[100];
  // 학번
  char id[100];
  // 총점
  int totalscore;
};


// 입력 함수
struct student ScanData(){
  // 코드 입력
}

// 출력 함수
void print(struct student s){
  // 코드 입력
}

// 이름 순으로 정렬 출력
void SortName(struct student s){
  // 코드입력
  // 정렬
  // 출력
}

// 총점으로 정렬 1등 부터 정렬 해서 출력
void SortScore(struct student s){
  // 코드입력
  // 정렬
  // 출력
}

// 평균을 넘지 못한 사람 출력하기
void Cutavg(struct student s){
  // 코드 입력
}

int main(){

  // 구조체 배열 선언
  struct student stu[MAX];

  // 입력
  for(int i = 0 ; i < MAX ; i++){
      stu[i] = ScanData();
  }

  // 출력
  printf("일반 출력\n");
  print(stu);

  // 정렬 출력
  printf("이름순 출력\n");
  SortName(stu);

  printf("점수순 출력\n");
  SortScore(stu);

  printf("평균을 넘은 사람출력\n");
  Cutavg(stu);
}

//Copyright 2017. Chang-Gun Lee (N.eX.T) all rights reserved.

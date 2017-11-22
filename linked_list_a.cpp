// 코드를 완성하세요
#include "iostream"
#include "stdlib.h"
using namespace std;


class Link{
    public:
        int m_data;
        Link * NEXT;
    public:
        Link(int);
        void Insert( int );
        void Delete();
        void Print();

};

// 생성자
Link::Link(int data){
    m_data = data;
    NEXT =NULL;
}


// 뒤로 이어 붙이는거
void Link::Insert(int data){
    Link*temp = new Link(data);
    temp -> NEXT = this->NEXT;
    this->NEXT = temp;
}

// 앞에서 부터 지워준다.
void Link::Delete(){
    if(this->NEXT->NEXT != NULL){
        NEXT->Delete();
    }else{
        delete(this->NEXT);
        this->NEXT =NULL;
    }
}

// 출력
void Link::Print(){
    if(this->NEXT != NULL){
        cout << m_data << endl;
        NEXT->Print();
    }else{
        cout << m_data << endl;
        return;
    }
    return;
}


int main(){
    
    // linked list 생성
    Link * node = new Link(1);
    // insert 메소드 호출
    node->Insert(2);
    node->Insert(3);
    node->Insert(4);
    node->Insert(5);

    node->Print();
    // delete 메소드 호출
    node->Delete();    
    // print 메소드 호출
    node->Print();

}

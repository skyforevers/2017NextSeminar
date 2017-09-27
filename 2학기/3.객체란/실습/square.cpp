#include <iostream>
using namespace std;

class square{
    
    // 사각형의 정보 저장 private
    private:
        int width;
        int height;

    public :
    // 생성자
        square();
    // 소멸자
        ~square();
    // 가로세로를 입력하는 메소드
        void input();
    // 넓이를 구하는 메소드
        double area();
    // get set 메소드 구현
        int getWidth();
        int getHeight();
        void setWidth(int);
        void setHeight(int);
};

square::square(){
    width = 0;
    height = 0;
}

square::~square(){
    cout<< "프로그램 끝" << endl;
}

void square::input(){
    cout << "가로:";
    cin >> width;
    cout << "세로:";
    cin >> height;
    
    return ;
}

double square::area(){
    return (double)width*height;
}

int square::getWidth(){
    return width;
}

int square::getHeight(){
    return height;
}

void square::setWidth(int width){
    this->width = width;
}

void square::setHeight(int height){
    this->height = height;
}

int main(){
    
    // 객체 생성
    square * sq;

    sq = new square();

    // 입력받기
    sq->input();
    // 넓이를 구해서 출력
    cout << "넓이: " << sq->area() << endl;
    // get을 이용해서 가로 세로 출력
    cout << "가로: " << sq->getWidth() << endl;
    cout << "세로: " << sq->getHeight() << endl;
    // set을 이용해서 가로 세로 변경
    sq->setWidth(10);
    sq->setHeight(10);
    //
    // 넓이를 구해서 출력
    cout << "넓이: " << sq->area() << endl;
    // get을 이요해서 가로 세로 출력
    cout << "가로: " << sq->getWidth() << endl;
    cout << "세로: " << sq->getHeight() << endl;

    return 0;
}

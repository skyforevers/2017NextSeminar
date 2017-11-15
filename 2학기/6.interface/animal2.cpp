#include "iostream"
#include "stdlib"
#include "string"

// List
class List{
    private:
        animal * data;
        List * Next;
    public:
        getanimal();
        insertanimal();

};

// 추상 클래스로 만들기
class animal{
    protected:
        int leg;
        string name;
        int age;
    public:
        animal();
        animal(string s);
        makenosie();
    
};

class dog:public animal{   
    
}

class cat:public aniaml{

}


int main(){
    animal * a[10];

    a[0] = new dog();
    a[1] = new cat();

    // 출력
    for()

}






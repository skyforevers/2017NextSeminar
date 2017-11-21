#include "iostream"
#include "string"
using namespace std;
class animal;

// List
class List{
    public:
        animal * data;
        List * Next;
        List(){
        }
};

// 추상 클래스로 만들기
class animal{
    protected:
        int leg;
        string name;
        int age;

    public:
        
        animal(string name,int leg , int age){
            this->leg = leg;
            this->name = name;
            this->age = age;
        }
        
        virtual void makenosie()=0;
};

class dog:public animal{   
    public:
        dog(string name , int leg, int age):animal(name, leg , age){}
        
        void makenosie(){
            cout << " 멍멍멍멍" << endl;
        }
};

class cat:public animal{
    public:
        cat(string name , int leg, int age):animal(name, leg , age){}

        void makenosie(){
            cout << "야옹 야옹 야옹 야옹" << endl;
        }
};

List *  insert(List * a , animal * New){
   List * temp = new List(); 
   temp->data = New;
   temp->Next = NULL;
    if(a == NULL){
        a = temp;
    }else{
        temp -> Next = a;
        a = temp;
    }
    return a;
}

void print(List * a){
   List * temp = a;
       
   while(temp != NULL){
       temp->data->makenosie();
       temp = temp->Next;
   }
    
}

int main(){
    
    List * a = NULL;
    animal * d = new dog("똥땅" , 4 , 3);
    animal * c = new cat("땅땅" , 4 , 2);

    a = insert(a , d);
    a = insert(a , c);

    print(a);

}






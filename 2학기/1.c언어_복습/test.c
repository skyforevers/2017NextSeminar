#include <stdio.h>
#include <ctype.h>

int scan_int(int * mydata){

    int c;
    
    *mydata = 0;
    
    c = getchar();

    while(c == ' ' || c == '\n' || c == '\t'){
    
        if( !isalpha(c)){
           c = getchar(); 
        }else{
            return 0;
        }



    }

    while( c != '\n' && c != '\t' && c != ' '){
        
        c -= 48;
       
        if( !isalpha(c) ){
            *mydata *= 10;
            *mydata += c;
        }else{
            return 0;
        }
        
        c = getchar();
        
    }

    return 1;

}

int main(){

    int mydata;

    while( scan_int(&mydata) == 1){
        printf("읽은 값은 %d 입니다\n",mydata);
    }

    return 0;

}

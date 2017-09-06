#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 99
int main(){
    char *ptr[20];
    
    char *temp;

    char str[MAX];
    
    int i;

    // 입력
    for ( i = 0 ; i < 20 && scanf("%s",str) != EOF ;i++ ){
        ptr[i] = (char*)malloc(strlen(str)+1);
        strcpy(ptr[i] , str);
    }
    
    printf("==================\n");
    // 출력
    for(int k = 0 ; k < i ; k++){
        printf("%s\n", ptr[k]);
    }

    i -= 1;

    // 정렬
    for(int k = i ; k > 0; k--){
        for(int l = 0 ; l < k ; l++){
            if( 1 <=  strcmp( ptr[l] , ptr[l+1]) ){
                temp = ptr[l];
                ptr[l] = ptr[l+1];
                ptr[l+1] = temp;
            }
        }
    }
    
    printf("==================\n");
    // 출력
    for(int k = 0 ; k <= i ; k++){
        printf("%s\n", ptr[k]);
    }

    return 0;
}

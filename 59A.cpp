#include<iostream>
#include<string>
#include<cstring>
#include <ctype.h>

using namespace std;

int main(){
    char w[100];
    cin >> w;

    int upper=0;
    int lower=0;


    for(int i = 0; i<strlen(w); i++){
        if(isupper(w[i])){
            upper++;
        }
        if(islower(w[i])){
            lower++;
        }
    }

    for(int i = 0; i<strlen(w); i++){
        if(upper>lower){
            putchar(toupper(w[i]));
        }else if(upper==lower){
            putchar(toupper(w[i]));
        }else{
            putchar(tolower(w[i]));
        }
    }
}
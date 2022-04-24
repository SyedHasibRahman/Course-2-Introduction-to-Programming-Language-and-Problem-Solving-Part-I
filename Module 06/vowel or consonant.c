#include<stdio.h>

int main(){
    char c;
    int lowerCaseVowel, upperCaseVowel;


    scanf("%c", &c);

    lowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    upperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(lowerCaseVowel || upperCaseVowel){
        printf("vowel");
    }else{
        printf("consonant");
     }



    return 0;
}

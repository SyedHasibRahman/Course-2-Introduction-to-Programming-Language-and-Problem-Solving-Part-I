#include<stdio.h>


int main (){
    for (int i = 1; i <=10; i++){
        if (i%3 == 0)  continue;
        printf("%d\n --->", i);

        for (int j=1; j<=10; j++){
            printf("%d\t", i*j);
        }

    }

}


//#include<stdio.h>

//
//int main (){
//    for (int i = 1; i <=10; i++){
//        if (i%2 != 0)  continue;
//        printf("%d\n", i);
//
//    }
//
//}

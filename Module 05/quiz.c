#include<stdio.h>
int main() {
    int count;
	for (int i=0; i<3; i++) {
    	for (int j=0; j<5; j++) {
                count++;
        	printf("*");
    	}
	}
	printf("%d", count);
}

/*
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i=1; i<=n; i++) {
    	sum += i;
	}
	printf("%d", sum);
}
#include<stdio.h>

int main(){
    int count;
     for (int i=1, j=1; i+j<=10; i++, j++) {
        printf("%d>Hello world\n", i);
        count++;
    }
    printf("%d",count);
    return 0;
}
*/

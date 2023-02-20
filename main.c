#include <stdio.h>
void round_number(int number);
int main() {
     int test,array[10000];
     //printf("the test case");
    scanf("%d",&test);
     for(int i=0;i<test;i++){
         scanf("%d",&array[i]);
     }
     for(int i=0;i<test;i++){
         round_number(array[i]);
     }

}
void round_number(int number){
    int base=1;
    int temp[10001];
    int counter = 0;

    while(number!=0){
        int rem=number%10;
        rem=rem*base;
        base=base*10;
        if(rem!=0){
            //printf("%d\t",rem);
            temp[counter++] = rem;
        }
        number=number/10;
    }
    printf(" %d\n",counter);
    for(int i=0; i<counter; i++){
        printf("%d \t",temp[i]);
    }
    printf("\n");
}

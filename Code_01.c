#include<stdio.h>
#include<time.h>
int main(){
    clock_t Start = clock();
    int num[10]={1,2,3,4};
    num[4]=25;
    printf("success\n");
    clock_t end = clock();
    double elapsed= (double)(end - Start)/CLOCKS_PER_SEC;
    printf("Elapsed time %f",elapsed);
    return 0;
}

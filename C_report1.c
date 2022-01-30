#include<stdio.h>

void sorting(int scores[],int data[],int SIZE);
//処理コード 맨왼쪽 숫자i와 그외 숫자j를 비교하여 i가 j보다 작거나 같으면 i에 저장 j가 i보다 작을경우 j와 i의 위치를 바꾼다.
void sorting(int scores[],int data[],int SIZE){
    int trans;
    for(int i =0; i <SIZE; i++){
        data[i] = scores[i];
    }
    for(int i =0; i<SIZE; i++){
        for(int j=0;j<SIZE;j++){
            if(scores[i] >=scores[j]){
                trans = scores[i];
                scores[i] = scores[j];
                scores[j] = trans;
            }
        }
    }
}

void printSorting(int scores[], int data[], int SIZE);
void printSorting(int scores[], int data[], int SIZE){
    printf("scores = ");
    for(int i = 0; i< SIZE; i++){
        printf("%d ",data[i]);
    }
    printf("\nresults = ");
    for(int i = 0; i< SIZE; i++){
        printf("%d ",scores[i]);
    }
}
int main(){
    //const int SIZE = 100; //定数として配列のサイズを宣言     
    int scores[] = {0,60,70,100,90};                     
    int scores2[] = {100, 60, 70, 100, 90, 80};
    const int num = sizeof(scores)/sizeof(int);
    const int num2 = sizeof(scores2)/sizeof(int);
    int data[num];
    int data2[num];
    
    printf("\n example 1\n");
    sorting(scores,data,num);
    printSorting(scores,data,num);
    printf("\n example 2\n");
    sorting(scores2,data2,num2);
    printSorting(scores2,data2,num2);
    return 0;
}
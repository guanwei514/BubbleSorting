/*
 * @Author: GuanweiSu
 * @Date: 2021-08-24 23:05:06
 * @LastEditTime: 2021-08-26 23:51:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /BubbleSorting/BubbleSorting.cpp
 */

#include "BubbleSorting.h"

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void BubbleSort(int* array, int size){
    for(int p = 1; p< size ; p++){
        for(int s= 0; s<size-p ; s++){
            if(array[s] > array[s+1]){
            swap(&array[s],&array[s+1]);
            }
        } 
    }
}
int main(){
    ComputingTime CT;
    //Do Code Here.
    const int maxsize = 10;
    int GivenArray[maxsize] ={0};
    //
    std::cout<<"An Example of Bubble Sorting , Please Give an Integer Array (MaxSize= "<<maxsize<<" ) : "<<std::endl;
    for(int k = 0; k <maxsize ; k++){
        std::cout<<"No. "<< k<<" :";
        std::cin >> GivenArray[k];
    }
    CT.SetStartTime();      //Record the Start Time
    BubbleSort(GivenArray,maxsize);
    CT.SetEndTime();    //Record the End Time
    for(int i = 0; i <maxsize ; i++){
        std::cout<<GivenArray[i]<<" ";
    }
    std::cout << std::endl;
    std::cout<< "[Done] exited with code in "<<(float)CT.GetTimeDiffInSecond()<<" seconds."<<std::endl;

    return 0;
}

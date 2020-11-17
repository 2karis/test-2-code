/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void staticArr();
void heapArr();
void stackArr();
int main()
{
	staticArr();
    heapArr();
    stackArr();

	return 0;
}

void staticArr(){
   double time_spent = 0.0;

    clock_t begin = clock();
    for(int i =0; i < 100000;i++){
    static int vars[100000];
    }
    clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("staticArr is %f \n", time_spent);


}

void heapArr(){
    double time_spent = 0.0;

    clock_t begin = clock();
    for(int i =0; i < 100000;i++){

    int* arr2= (int*) malloc(100000 * sizeof(int));
        }
    clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("heapArr is %f \n", time_spent);

}
void stackArr(){
   double time_spent = 0.0;

    clock_t begin = clock();
    for(int i =0; i < 100000;i++){
    int arr3[100000]; // STACK
    }
    clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("stackArr is %f \n", time_spent);

}

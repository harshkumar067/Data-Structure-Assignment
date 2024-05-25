#include <iostream>
using namespace std;

class DyanmicArray{
    int arr[];
    int capacity;
    double resizefactor;

    DyanmicArray(){
        this->arr=new int[capacity];
        this->size=0;
        this->resizefactor=2;
        this->capacity=10;
    }

    void insertAtIdx(int idx,int ele){
         if(idx<0||idx>size){
            cout<<"index not found";
         }
         if(size==capacity){
            
         }
    }
}
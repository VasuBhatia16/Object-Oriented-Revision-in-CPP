#include<iostream>

using namespace std;

class Vector{
    public:
        int size;
        int capacity;
        int* arr;

        Vector(){
            this->size = 0;
            this->capacity = 1;
            this->arr = new int[1];
        }

        void add(int num){
            if(this->size<this->capacity){
                this->arr[this->size++] = num;
            }
            else{
                this->capacity*=2;
                int* arr2 = new int[this->capacity];
                for(int i=0;i<this->size;i++){
                    arr2[i] = arr[i];
                }
                arr2[this->size++] = num;
                delete[] this->arr;
                this->arr = arr2;
            }
        }

        void print(){
            for(int i=0;i<this->size;i++){
                cout<<this->arr[i]<<" ";
            }
            cout<<endl;
        }
        
        int get(int index){
            if(size==0){
                cout<<"Empty array"<<endl;
            }
            else if(index>=size || index<0){
                cout<<"Invalid Index"<<endl;
            }
            else{
                return this->arr[index];
            }
            return -1;
        }

        void pop(){
            if(size==0){
                cout<<"Empty array"<<endl;
                return;
            }
            cout<<"Popped "<<this->arr[--size]<<endl;
        }
};

int main()
{
    Vector v1;
    // cout<<v1.get(0)<<endl;
    v1.add(10);
    v1.add(11);
    v1.add(12);
    v1.add(13);
    v1.add(15);
    v1.add(16);
    v1.print();
    v1.pop();
    v1.print();
    v1.pop();
    v1.print();
    v1.pop();
    v1.print();
    v1.add(11);
    v1.add(10);
    v1.print();
    v1.pop();
    v1.pop();
    v1.pop();
    v1.pop();
    v1.pop();
    v1.pop();
    v1.pop();
    // cout<<v1.get(4)<<endl;
    // cout<<v1.get(-1)<<endl;
    return 0;
}
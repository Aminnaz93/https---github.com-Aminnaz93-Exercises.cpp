#include <iostream>


void Greetings(){
    std::cout << "Hello You!" << std::endl;
}


///////////////////////////////////////////////////////


int add(int a,int b){
    return a + b;
}

///////////////////////////////////////////////////////

int mult(int a , int b){
    return a * b;
}

///////////////////////////////////////////////////////

void updateValue(int &num) {
    num += 10;
}

///////////////////////////////////////////////////////

void name1(std::string name){
    std::cout << name << "Nazari" << std::endl;
}

///////////////////////////////////////////////////////

int add1(int a){
    return 5 + a;
}


///////////////////////////////////////////////////////


void myArray(int arr[],int length){

    for(int i = 0; i < length; i++){
        std::cout << arr[i] << std::endl;
    }
} 
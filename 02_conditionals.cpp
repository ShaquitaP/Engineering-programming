/*
Math Operators: +, -, *, /, %, pow(x,y), sqrt(x)
Logical Operators: > , < , >= , <= , && , ||

-> Create a code that will request the user one number, and tell if this number is multiple of 7 and is even
*/
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;


class Calculator{
    private:
        // Atributs
        // this is a way of encapsulation
        int num1;
        int num2;
        float total;

    public:
        // Constructor
        Calculator(int, int);
        // Gets (receive) and set (edit, modifier), create the others for num2 and total
        int get_num1();
        void set_num1(int);
        int get_num2();
        void set_num2(int);
        float getTotal();
        void setTotal(float);

        // Methods (functions and operations)
        void multiple7_2();
        bool multiple7_2_answer();
        void all_operations();
        // create a fuctions that will use all the math operators: +, -, *, /, %, pow(x,y), sqrt(x)
        // receive a number from the user and print what numbest the input is multiple of (1-10): input 8 -> 1,2,4,8

};

Calculator::Calculator(int num1, int num2){
    this->num1 = num1;
    this->num2 = num2;
}
int Calculator::get_num1(){
    return this->num1;
}
void Calculator::set_num1(int num1){
    this->num1 = num1;
}

int Calculator::get_num2() {
    return this->num2;
}

void Calculator::set_num2(int num2) {
    this->num2 = num2;
}

float Calculator::getTotal() {
    return this->total;
}

void Calculator::setTotal(float total) {
    this->total = total;
}

void Calculator::multiple7_2(){
    int inputNum;

    cout << "Please input a number:\n";
    cin>>inputNum;

    if (inputNum % 7 == 0 && inputNum % 2 == 0) {
        cout <<"yes\n";
    }
    else {
        cout<<"no\n";
    }
}

bool Calculator::multiple7_2_answer(){
    int inputNum;

    cout << "Please input a number:\n";
    cin>>inputNum;

    if (inputNum % 7 == 0 && inputNum % 2 == 0) {
        cout <<"yes\n";
        return true;
    }
    else if(inputNum % 2 != 0) {
        cout<<"no\n";
        return false;
    }
    return false;
}

void Calculator::all_operations() {
    int n1; // the result of the answer will inherit the type of the first variable
    int n2;
    n1 = this->get_num1();
    n2 = this->get_num2();

    cout<<"num1 + num2 = "<<n1+n2 <<"\n";
    cout<<"num1 - num2 = "<<n1-n2<<"\n";
    cout<<"num1 * num2 = "<<n1*n2<<"\n";
    cout<<"num1 / num2 = "<<double(n1/n2)<<"\n";
    cout<<"is num1 divisible by num2?"<<n1%n2<<"\n";
    cout<<"each number to the power of 2: "<<pow(n1,2)<< " "<<pow(n2,2)<<"\n";
    cout<<"each number's square root: "<<sqrt(n1)<<" "<<sqrt(n2)<<"\n";//pow(8,(1/3) )
}


int main() {
    Calculator input1(1,2);
    cout<<"Before set: "<<input1.get_num1()<<'\n';
    input1.set_num1(2);
    cout<<"After set: "<<input1.get_num1()<<'\n';

    cout<<"Before set: "<<input1.get_num2()<<"\n";
    input1.set_num2(4);
    cout<<"After set: "<<input1.get_num2()<<"\n";

    input1.multiple7_2();
    input1.multiple7_2_answer();
    input1.all_operations();

    return 0;

}





#include <iostream>
#include <iomanip>
//using namespace std;
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

//Signature of the function
int what_system(double, double);
double bmi_calculation_us(double, double); //return; name_function; paraeters_function 
double bmi_calculation_universal(double, double); //return; name_function; paraeters_function 
void print_answer(double bmi);
void print_status(double);


int main(){
    // Declare variables
    int age;
    double weight;
    float heith;
    char name;
    double bmi;

    // Input data
    cout<<"Digit your age: ";
    cin>>age;
    cout<<"Type weight in pounds and height in inches\n";
    cin>> weight;
    cin>>heith;

    what_system(weight, heith);
    
    return 0;
}
// Develop function
void print_answer(double bmi){
    cout<< "BMI: ";
    cout<<fixed<<setprecision(2)<<bmi<<'\n';
}
double bmi_calculation_us(double weight, double height){
    double bmi = 0;
    bmi = 703 * (weight / (height*height) ); 
    //print_answer(bmi);
    return bmi;
}
double bmi_calculation_universal(double weight, double height) {
    double bmi = 0;

    bmi = (weight / (height*height) );
    return bmi;
}
int what_system(double weight, double height){
    int bmi_us;
    int bmi_uni;

    int system;

    cout<<"Which system do you want? 0 for US, 1 for Universal\n";
    cin>> system;
    // also say the status of the bmi calling a fucntion that will calculate it
    if (system == 0) {
        bmi_us = bmi_calculation_us(weight, height);
        print_answer(bmi_us);
        print_status(bmi_us);

    }
    else if (system == 1) {
        bmi_uni = bmi_calculation_universal(weight, height);
        print_answer(bmi_uni);
        print_status(bmi_uni);
    }

    return system;

}
void print_status(double bmi) {

    if (bmi <= 18.4) {
        cout<<"Underweight\n";
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
            cout<<"Normal\n";
    }
    else if (bmi >= 25.0 && bmi <=39.9) {
            cout<<"Overweight\n";
    }
    else if (bmi >= 40.0) {
            cout<<"Obese\n";
    }
}











// Primitive Types of Variables 
// Complex: string, vector, matrix
// cout << fixed << setprecision(2) << var; 

// g++ nameOfFile.cpp
// ./a.out

// Request the dimensions of each of this geometric formulas and calculate the area and perimeter: https://i.pinimg.com/originals/67/31/02/67310210c6b319f331a9c86f8f73e5aa.png
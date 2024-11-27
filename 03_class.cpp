#include <iostream>
#include <cmath>

using::std::cout;

class Robot{
    private:
        char *voice_tone; //memory alocated as a vector
        char *camera; //pointer is a infinit vector in the memory without an end
        float speed;
        char *material;
    public:
        // Constructor
        Robot();

        // Gets and sets
        void set_voice_tone(char*);
        char* get_voice_tone() const;
        void set_camera(char*);
        char* get_camera() const;
        void set_speed(float);
        float get_speed() const;
        void set_material(char*);
        char* get_material() const;

        // Overload operators : +, -, *, /, %, pow(x,y), sqrt(x) see documentation
        Robot operator+ (const Robot&) const;
        Robot operator- (const Robot&) const;
        Robot operator* (const Robot&) const;
        Robot operator/ (const Robot&) const;
        Robot operator% (const Robot&) const;
        Robot sqrt(const Robot&) const; // homework

};

Robot::Robot() {
    this->voice_tone = "male";
    this->camera = "i see a tree";
    this->speed = 10.0;
    this->material = "platinum";
}
void Robot::set_voice_tone(char* tone){
    this->voice_tone = tone;
}
char*Robot:: get_voice_tone() const{
    return this->voice_tone;
}
void Robot::set_camera(char* lens){
    this-> camera = lens;
}
char*Robot::get_camera() const{
    return this->camera;
}
void Robot::set_speed(float mph) {
    this->speed = mph;
}
float Robot::get_speed() const{
    return this->speed;
}
void Robot::set_material(char* physical) {
    this->material = physical;
}
char*Robot::get_material() const {
    return this->material;
}


Robot Robot::operator+ (const Robot& other) const{ //& send by reference, not as a copy, in this way is more secure
    Robot r_new;
    float speed_total = this->get_speed() + other.get_speed();
    r_new.set_speed(speed_total);
    return r_new;
}

Robot Robot::operator- (const Robot& other) const {
    Robot r_new;
    float speed_total = this->get_speed() - other.get_speed();
    r_new.set_speed(speed_total);
    return r_new;
}

Robot Robot::operator* (const Robot& other) const {
    Robot r_new;
    float speed_total = this->get_speed() * other.get_speed();
    r_new.set_speed(speed_total);
    return r_new;
}

Robot Robot::operator/ (const Robot& other) const {
    Robot r_new;
    float speed_total = this->get_speed() / other.get_speed();
    r_new.set_speed(speed_total);
    return r_new;
}

Robot Robot::operator% (const Robot& other) const {
    Robot r_new;
    float speed_total;
    //cout<<static_cast<int>(this->get_speed() ) % static_cast<int>(other.get_speed())<<"\n";
    if (static_cast<int>(this->get_speed() ) % static_cast<int>(other.get_speed()) == 0) {
        speed_total = 1.0;
       // cout<<"if\n";
    }
    else {
        speed_total = 0.0;
       // cout<<"else\n";
    }
    r_new.set_speed(speed_total);
    return r_new;
}

Robot Robot::sqrt(const Robot& other) const {
    Robot r_new;
    float speed_total;
    speed_total = std::sqrt(other.get_speed());
    r_new.set_speed(speed_total);
    return r_new;
}


int main(){
    Robot r1, r2, r3;
    r3 = r1+r2;
    cout<<"r1 + r2 = "<<r3.get_speed()<<"\n";

    r3 = r1-r2;
    cout<<"r1 - r2 = "<<r3.get_speed()<<"\n";

    r3 = r1 * r2;
    cout<<"r1 * r2 = "<<r3.get_speed()<<"\n";

    r3 = r1 / r2;
    cout<<"r1 / r2 = "<<r3.get_speed()<<"\n";

    r3 = r1.sqrt(r2);
    cout<<"r1.sqrt(r2): "<<r3.get_speed()<<"\n";

   // cout<<"here1\n";
    r3 = r1 % r2;
    cout<<"r1 % r2: "<<r3.get_speed()<<"\n";
    // cout<<"here2\n";
    return 1;
}

/*

char letter (1 bit)
int (2 bits)
float (4 bits)
long long (8 bits)
char [10] (10 bits) = alocating 10 bits in the memory
char *
______________________________




*/
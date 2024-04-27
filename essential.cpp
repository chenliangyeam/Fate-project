#include <iostream>
using namespace std;

class Human{
private:
    string name;
    int age;
public:
    Human(){
        this->name = "Unknown";
        this->age = 0;
    }
    void print(){
        cout << this->name << " is " << this->age << " years old." << endl;
    }
};

class Servant{
private:
    string skill;





};

int main(){

    Human saber;
    saber.print();
}
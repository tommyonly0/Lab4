#include <iostream>
#include <string>

class Car {
public:
    Car(int year, std::string make) : yearModel(year), make(make), speed(0) {}
    int getYearModel() const { return yearModel; }
    std::string getMake() const { return make; }
    int getSpeed() const { return speed; }
    void accelerate() { speed += 5; }
    void brake() { speed -= 5; if (speed < 0) speed = 0; }

private:
    int yearModel;
    std::string make;
    int speed;
};

int main() {
    Car myCar(2022, "Toyota");
    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        std::cout << "Current speed: " << myCar.getSpeed() << std::endl;
    }
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        std::cout << "Current speed: " << myCar.getSpeed() << std::endl;
    }
    return 0;
}
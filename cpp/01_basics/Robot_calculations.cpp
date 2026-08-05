#include <iostream>
int main()
{
    double speed = 0.5;
    double time = 20.0;
    double distance = speed * time;

    int battery = 100;
    battery = battery - 15;

    double left_wheel = 2.3;
    double right_wheel = 2.5;
    double avg_speed = (left_wheel + right_wheel)/2;

    std::cout << "speed: " << speed << "m/s" << std::endl;
    std::cout << "time: " << time << " s" << std::endl;
    std::cout << "distance: " << distance << " m" << std::endl;
    std::cout << "battery: " << battery << "%" << std::endl;
    std::cout << "left_wheel: " << left_wheel << "m/s" << std::endl;
    std::cout << "right_wheel: " << right_wheel << "m/s" << std::endl;
    std::cout << "avg_speed: " << avg_speed << "m/s" << std::endl;

    return 0;
}
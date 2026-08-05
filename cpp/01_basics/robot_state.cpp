#include <iostream>
#include <string>
int main()
{
    std::string robot_name = "turtlebot";
    int battery_level = 85;
    double speed = 0.5;
    double temperature = 42.5;
    int motor_count = 2;
    bool autonomous = true;

    std::cout <<"Robot Name: " << robot_name << std::endl;
    std::cout << "Battery Level: " << battery_level << "%" << std::endl;
    std::cout << "Speed: " << speed << "m/s" << std::endl;
    std::cout << "Temperature: " << temperature << " C" << std::endl;
    std::cout << "Motor Count: " << motor_count << std::endl;
    std::cout << "Autonomous: " << (autonomous ? "Yes" : "No") << std::endl;

    return 0;
}
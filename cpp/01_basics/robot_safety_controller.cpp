#include <iostream>
int main()
{
    int battery_level = 75;
    bool obstacle_detected = false;
    bool emergency_stop = false;
    double motor_temperature = 45.0;

    if(battery_level>20 && !obstacle_detected && !emergency_stop && motor_temperature < 80)
    {
        std::cout << "Robot is safe to move" << std::endl;

    }
    else
    {
        std::cout << "Robot stopped for safety " << std::endl;
    
    }
    return 0;
}
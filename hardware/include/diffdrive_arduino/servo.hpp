#ifndef DIFFDRIVE_ARDUINO_SERVO_HPP
#define DIFFDRIVE_ARDUINO_SERVO_HPP

#include <string>

class Servo
{
    public:

    std::string name = "";
    bool cmd = false;

    Servo() = default;

    Servo(const std::string &servo_name)
    {
      setup(servo_name);
    }
    
    void setup(const std::string &servo_name)
    {
      name = servo_name;
    }
};


#endif // DIFFDRIVE_ARDUINO_SERVO_HPP

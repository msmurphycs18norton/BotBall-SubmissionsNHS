#include <kipr/botball.h>

int main()
{
    enable_servos();
    void pickup(){
    	set_servo_position(0, 2047);
    	set_servo_position(1, 1000);
    	msleep(1000);
    	set_servo_position(1, 0);
    	msleep(500);
    	set_servo_position(0, 1000);
    }
    pickup();
    msleep(2000);
    disable_servos();
    return 0;
}

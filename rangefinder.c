#include <kipr/botball.h>

int main()
{
	while(analog(5) <= 2000){
    motor(0, 75);
    motor(1, 75);
    }
    ao();
}

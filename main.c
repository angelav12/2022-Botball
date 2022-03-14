#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    //move forward
	motor(0,40);
    motor(3,40);
    msleep(1000);
    //move backwards
    motor(0,-20);
    motor(0,-20);
    msleep(1000);
     
    ao();
    enable_servos();
    set_servo_position(0,1010);
    msleep(1000);
    set_servo_position(0,1540);
    msleep(1000);
    set_servo_position(0,1010); 
    msleep(1000);
    set_servo_position(0,1540);
    msleep(1000);
    set_servo_position(0,1010); 
    msleep(1000);
    set_servo_position(0,1540);
    msleep(1000);
    ao();
        return 0;
}

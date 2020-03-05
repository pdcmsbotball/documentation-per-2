#include <kipr/wombat.h>

int main()
{
    printf("Starting...\n");
    shut_down_in(118);
    
    //turn right
    mav(2,-1500);
    mav(3,1500);
    msleep(750);
    
    //forward
    mav(2,1500);
    mav(3,1500);
    msleep(2600);
    
    //turn left
    mav(2,1500);
    mav(3,-1500);
    msleep(1450);
    
    //forward
    mav(2,1500);
    mav(3,1500);
    msleep(1500);
    
    //turn
    mav(2,-1500);
    mav(3,1500);
    msleep(1400);
    
    //forward
    mav(2,1500);
    mav(3,1500);
    msleep(2159);
    
    //turn
    mav(2,1500);
    mav(3,-1500);
    msleep(550);
    
    //forward
    mav(2,1500);
    mav(3,1500);
    msleep(1050);
 
    return 0;
}
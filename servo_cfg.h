#include <Servo.h>
#include <Arduino.h>

#define NUM_LEG       6
#define SWING_COXA    17
#define SWING_FEMUR   20
#define SWING_TIBIA   16
#define DUR           300

const unsigned int offsetServoCoxa[6]={105,85,60,120,125,85}; //zero offset servo C,B,F,D,A,E (coxa C rusak)
const unsigned int offsetServoFemur[6]={75,90,85,90,85,85};   //zero offset servo C,B,F,D,A,E (femur C rusak)
const unsigned int offsetServoTibia[6]={55,90,80,90,90,80};   //zero offset servo C,B,F,D,A,E

int deg_servo(unsigned int* offset,unsigned int legNum);              //offset+sudut servo
void init_servo();                                                    //fungsi inisialisasi pin servo
void standby();                                                       //fungsi servo standby
void maju();                                                          //fungsi jalan maju
void mundur();                                                        //fungsi jalan mundur
void putar_kanan();                                                   //fungsi putar kanan
void putar_kiri();                                                    //fungsi putar kiri
void geser_kanan();                                                   //fungsi geser kanan
void geser_kiri();                                                    //fungsi geser kiri

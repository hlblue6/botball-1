#include <kipr/botball.h>

#ifndef _DRIVE_H_
#define _DRIVE_H_

//primary driving code

#define MOT_LEFT 3
#define MOT_RIGHT 0

#define PI 3.14159265358979

#define SPD 100 //turning
#define SPDl 90. //left forward
#define SPDr 90. //right forward
#define rdistmult 1.0
#define SPDlb 8.  //left backward
#define SPDrb 8.  //right backward
#define rdistmultb (SPDrb/SPDlb)
#define wheeldiameter 5.0
#define ks 14.5 // Distance from one wheel to the other

long CMtoBEMF(float cm);
float BEMFtoCM(long ticks);

void drive_off();
void clear_all_drive();
void drive(int mL,int mR);

void right(float degrees, float radius);
void left(float degrees, float radius);
void forward(float distance);
void multforward(float distance, float speedmult);
void backward(float distance);

#endif

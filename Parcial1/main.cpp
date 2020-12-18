#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    float g=9.81; int HO=50, d=600, x0=0, y0=HO, dO=0.05*d;
    int HD=100, xD=d, yD=HD; float dD=0.025;
    int aO=50*M_PI/180, aD=0;

    int iter=0, flag=0;
    for(int VoO=0;VoO<100;VoO+=5){
        float VxO=VoO*cos(aO);
        float VyO=VoO*sin(aO);
        for(int t=0;t<500;t++){
            float x=VxO*t;
            float y=y0+VyO*t-(0.5*g*t*t);
            if(sqrt(pow(d-HD,2)+pow(x-y,2))<=dO){
                 flag=1;
                 break;
                }
            iter++;
            }
          }
    cout<<"Los disparos fueron: "<<endl;
    return 0;
}

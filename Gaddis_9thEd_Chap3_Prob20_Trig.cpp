/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const double pi = 3.14159265358979323846;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int angle;
    
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    
    //Display the outputs
cout<<fixed<<setprecision(4)<<showpoint;
cout<<"Calculate trig functions"<<endl;
cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
   float rad = angle*pi/180;
    float Trigsin = sin(rad);
    float Trigcos = cos(rad);                        
    float TrigTan = tan(rad);
cout<<"sin("<<angle<<") = "<<Trigsin<<endl;
cout<<"cos("<<angle<<") = "<<Trigcos<<endl;
cout<<"tan("<<angle<<") = "<<TrigTan;

    //Exit stage right or left!
    return 0;
}


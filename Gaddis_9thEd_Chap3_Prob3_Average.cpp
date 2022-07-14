/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float a, b, c, d, e;
    float avrg;
    float num = 5.0;
    //Initialize or input i.e. set variable values

    
    //Map inputs -> outputs

    //Display the outputs
cout<<"Input 5 numbers to average."<<endl;
    cin>>a>>b>>c>>d>>e;
        avrg = (a + b + c + d + e)/num;
cout<<setprecision(2)<<showpoint;
cout<<"The average = "<<avrg;
    //Exit stage right or left!
    return 0;
}


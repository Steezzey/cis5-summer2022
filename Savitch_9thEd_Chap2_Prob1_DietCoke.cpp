/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream> 
#include <iomanip>
#include <cmath>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const double DtSdSwt = 0.001;//diet soda sweetner 


//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes





//

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float a = 5;
    float b = 35;
    
    float c = 45359.2;
    float d = 100;
   
 cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
cout<<"Input the desired dieters weight in lbs."<<endl;

float wghtLb;
cin>>wghtLb;   
    
    float MsRt = a/b; 
float HmRt = c / d;
float SdPLthl = .35;


float wghtG = (wghtLb*HmRt);
float SwDt = wghtG*MsRt;
int DtCk = (SwDt/SdPLthl);
    //Declare Variablescin >>wghtLb>>endl;

    //Initialize or input i.e. set variable values
 
    
    //Map inputs -> outputs
    
    //Display the outputs

    
cout<<"The maximum number of soda pop cans"<<endl;
cout << "which can be consumed is "<<DtCk<<" cans";
    //Exit stage right or left!
    return 0;
}
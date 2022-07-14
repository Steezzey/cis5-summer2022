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
    float PayInc = .076;
   cout << "Input previous annual salary."<<endl; 
    float PrevSal;
    
    cin>>PrevSal;
    
    float NewAnS = (PrevSal*PayInc)+PrevSal;
    
    float RetPay = (PrevSal*PayInc)/2;
    
    float NewMnSl = NewAnS/12;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
 
    //Display the outputs

cout << fixed << setprecision(2) << showpoint;
cout << "Retroactive pay    = $"<<setw(7)<<RetPay<<endl;
cout << "New annual salary  = $"<<setw(7)<<NewAnS<<endl;
cout << "New monthly salary = $"<<setw(7)<<NewMnSl;
    //Exit stage right or left!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    int RoomMax;
    int RoomQty;
    int extra;
    int more;
    //Declare Variables
        cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>RoomMax>>RoomQty;

    //Initialize or input i.e. set variable values
if(RoomQty>RoomMax)
{
    extra = RoomQty-RoomMax;
    cout<<"Meeting cannot be held."<<endl;
    cout<<"Reduce number of people by "<<extra<<" to avoid fire violation.";
}
else
{
    more = RoomMax-RoomQty;
    cout<<"Meeting can be held."<<endl;
    cout<<"Increase number of people by "<<more<<" will be allowed without violation.";
}
    //Map inputs -> outputs

    //Display the outputs


    //Exit stage right or left!
    return 0;
}
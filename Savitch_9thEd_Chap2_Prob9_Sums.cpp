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
    
    {
    //Define variables
    int inptNm;
    int smPosNm=0;
    int smNegNm=0;
    int ttlNm=0;
    //Readsten whole numbers 

    for(int i=0;i<10;i++)
    {	
	    cin>>inptNm;
	    
	    ttlNm += inptNm ;
	   if(inptNm<=0)//validate negative
          smNegNm += inptNm;
       else 
	        
	        smPosNm += inptNm;
    }



     
     
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
  
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
 
    cout<<fixed<<setprecision(1)<<showpoint;
    //Print sum of all negative numbers
      cout << "Negative sum = " << setw(3) << smNegNm << endl;
    cout << "Positive sum = " << setw(3) << smPosNm << endl;
    cout << "Total sum    = " << setw(3) << ttlNm;
    //Exit stage right or left!
    }
    return 0;
}
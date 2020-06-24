/* 
 * File:   main.cpp
 * Author: Josepf Amador
 * Created on June 23, 2020, 5:23 PM
 * Purpose: Calculate the military budget as a percentage
 *          of the federal budget.
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    
    float milBdgt, fedBdgt, mlPrcnt;
    
    //Initialize all known variables
    
    milBdgt = 7.0e11f; //Military Budget = 700 Billion
    fedBdgt = 4.1e12f; // Federal Budget = 4.1 Trillion
    
    //Process Inputs to Outputs -> Mapping Process
    
    //Maps known values to the unknown objectives
    
    mlPrcnt = (milBdgt / fedBdgt) * 100;
    
    //Display the Inputs/Outputs
    
    cout << mlPrcnt << "%" << endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}

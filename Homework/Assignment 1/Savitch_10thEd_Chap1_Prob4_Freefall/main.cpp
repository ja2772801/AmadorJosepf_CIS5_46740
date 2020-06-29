/* 
 * File:   main.cpp
 * Author: Josepf Amador
 * Created on June 26, 2020, 9:10 PM
 * Purpose: Calculates how far an object would fall
 *          in freefall assuming no friction and
 *          starting at rest. 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath> //Math libary
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants
const int G = 32; //gravitational acceleration constant "g" in ft/sec^2

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    float time, //Time spent in freefall in seconds
          product, //Product of acceleration and time^2 before dividing by 2
          dist; //calculated distance fallen in freefall
            
    //Initialize all known variables
    cout<<"Enter amount of time (in seconds) in freefall." << endl;
    cin>>time;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    product = G * pow(time, 2); //aceleration x t^2
    dist = product/2;
            
    //Display the Inputs/Outputs
    cout<<endl; //Blank line before displaying outputs
    cout<<"Time spent: "<<time<<"s"<<endl;
    cout<<"Distance fallen: "<<dist<<"ft"<<endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

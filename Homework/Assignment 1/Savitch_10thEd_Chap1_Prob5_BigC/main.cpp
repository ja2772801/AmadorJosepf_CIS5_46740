/* 
 * File:   main.cpp
 * Author: Josepf Amador
 * Created on June 27, 2020, 9:16 PM
 * Purpose: Prints a large "C" composed of any single
 *          letter character chosen by the user
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
    char x; //character chosen by user
    
    //Initialize all known variables
    cout<<"Enter a letter."<<endl;
    cin>>x;
            
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    cout<<"        "<<x<<" "<<x<<" "<<x<<endl;
    cout<<"      "<<x<<"     "<<x<<endl;
    cout<<"     "<<x<<endl;
    cout<<"    "<<x<<endl;
    cout<<"    "<<x<<endl;
    cout<<"    "<<x<<endl;
    cout<<"    "<<x<<endl;
    cout<<"    "<<x<<endl;
    cout<<"     "<<x<<endl;
    cout<<"      "<<x<<"     "<<x<<endl;
    cout<<"        "<<x<<" "<<x<<" "<<x<<endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

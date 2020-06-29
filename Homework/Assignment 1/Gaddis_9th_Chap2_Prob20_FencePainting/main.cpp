/* 
 * File:   main.cpp
 * Author: Josepf Amador
 * Created on June 28, 2020, 3:19 PM
 * Purpose: Calculates amount of paint cans needed given the surface
 *          area of the fence to be painted.
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
    float actulSA, //Actual surface area of fence
          effecSA, //Effective surface area of fence
          lengthF, //length of fence
          heightF, //Height of fence
          galNeed; //Gallons needed
    const float galPerA = 340; //Paint paints 340ft^2 per gallon
    
    //Initialize all known variables
    lengthF = 100; //length in feet
    heightF = 6;   //height in feet
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    actulSA = lengthF * heightF; //Surface are in ft^2
    effecSA = actulSA * 2; //Fence is being painted twice
    galNeed = effecSA/galPerA; // unit check: ft^2/(ft^2/gal) yields gallons
    //Display the Inputs/Outputs
    cout<<"A gallon of paint covers "<<galPerA<<" square feet per gallon."
            <<endl;
    cout<<"Surface area of the fence is "<<actulSA<<" square feet."<<endl;
    cout<<endl; //Blank line before outputs
    cout<<"To paint the fence with 2 coats would require: "
            <<galNeed<<" gallons of paint."<<endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

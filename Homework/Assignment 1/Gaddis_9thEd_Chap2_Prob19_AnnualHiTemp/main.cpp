/* 
 * File:   main.cpp
 * Author: Josepf Amador
 * Created on June 28, 2020, 2:32 PM
 * Purpose: Predicts next year's hi temperatures assuming
 *          there is a 2% increase.
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
    int NYCTemp, DenTemp, PHXTemp; //High temperatures in New York City, Denver
                                   //and Phoenix
    const float PREDICT = 0.02f; // Predicted increase of 2%
    const int PRED100 = 100; //Constant to display increase a whole number
    float NYCPred, DenPred, PHXPred, //Predicted temperature of NYC, Denver
                                     //and Phoenix
          intPred; //To display prediction as whole number.
    
    //Initialize all known variables
    NYCTemp = 85; //Temperature highs in degrees Fahrenheit
    DenTemp = 88;
    PHXTemp = 106;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    NYCPred = (NYCTemp * PREDICT) + NYCTemp;
    DenPred = (DenTemp * PREDICT) + DenTemp;
    PHXPred = (PHXTemp * PREDICT) + PHXTemp;
    intPred = PREDICT * PRED100;
    
    //Display the Inputs/Outputs
    cout<<"Average July High Temperature for:"<<endl;
    cout<<"New York City: "<<NYCTemp<<"F"<<endl;
    cout<<"Denver:        "<<DenTemp<<"F"<<endl;
    cout<<"Phoenix:       "<<PHXTemp<<"F"<<endl;
    cout<<endl; //Blank line for break
    cout<<"Assuming an increase of "<<intPred<<"%."<<endl;
    cout<<endl;//Blank line
    cout<<"Next year's predicted high temperatures for:"<<endl;
    cout<<"New York City: "<<NYCPred<<"   F"<<endl;
    cout<<"Denver:        "<<DenPred<<"  F"<<endl;
    cout<<"Phoenix:       "<<PHXPred<<" F"<<endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

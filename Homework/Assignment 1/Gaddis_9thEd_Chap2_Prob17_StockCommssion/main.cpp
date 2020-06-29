/* 
 * File:   main.cpp
 * Author: Josepf Amador
 * Created on June 27, 2020, 10:10 PM
 * Purpose: Calculates a 2% stock commission based on amount
 *          of stock and price per stock. Kathryn bought 750
 *          stock at $35.00 each. Stockbroker's commision
 *          is 2%
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
    const float COMM = 0.02f; //Commission of stockbroker is 2%
    int nStock; //Number of stocks
    float Price, //Price of per stock in dollars
          ComPaid, //Commission of stockbroker paid
          StkPaid, //Amount paid for stock
          TotPaid; //Total paid. Commission + Stock
    
    //Initialize all known variables
    nStock = 750;
    Price = 35.00; //Price per stock in dollars
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    ComPaid = nStock * Price * COMM;
    StkPaid = nStock * Price;
    TotPaid = ComPaid + StkPaid;
    
    //Display the Inputs/Outputs
    cout<<nStock<<" stocks bought at $"<<Price<<" each."<<endl;
    cout<<endl; //Blank line before output
    cout<<"Total price of stock before commission:  $"<<StkPaid<<endl;
    cout<<"Price of commission:                     $"<<ComPaid<<endl;
    cout<<"Grand Total:                             $"<<TotPaid<<endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

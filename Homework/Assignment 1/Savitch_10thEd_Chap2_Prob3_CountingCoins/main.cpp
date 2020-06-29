
/* 
 * File:   main.cpp
 * Author: Josepf Amador
 * Created on June 26, 2020, 7:19 PM
 * Purpose: Prompts user for amount of quarters, dimes,
 *          nickels, pennies and outputs total dollar value.
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
    
    //Value of quarter, dimes, nickels, and pennies in dollars.
    const float QTRVALU = 0.25f, 
                DIMVALU = 0.10f, 
                NICVALU = 0.05f, 
                PENVALU = 0.01f;
    
    //User's amount of quarters, dimes, nickels, and pennies.
    int QtrAmt,
        DimAmt,
        NicAmt,
        PenAmt;
    //Calculated dollars from amount of quarters, dimes, nickels, and pennies.
    float DolQtr,
          DolDim,
          DolNic,
          DolPen,
          
          TotDlrs; //Calculated total amount of dollars
    
    //Initialize all known variables
    
    cout << "Enter number of quarters." << endl; //Quarter prompt
    cin >> QtrAmt;
    
    cout << "Enter number of dimes." << endl; //Dime prompt
    cin >> DimAmt;
    
    cout << "Enter number of nickels." << endl; //Nickel prompt
    cin >> NicAmt;
    
    cout << "Enter number of pennies." << endl; //Penny prompt
    cin >> PenAmt;
    
    cout << endl; //Blank line before displaying outputs.
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Calculated dollar total from number of coins * their own coin values.
    DolQtr = QtrAmt * QTRVALU;
    DolDim = DimAmt * DIMVALU;
    DolNic = NicAmt * NICVALU;
    DolPen = PenAmt * PENVALU;
    
    TotDlrs = DolQtr + DolDim + DolNic + DolPen; //Total amount of dollars
    
    //Display the Inputs/Outputs
    
    cout << "Amount of quarters: " << QtrAmt << endl;
    cout << "Amount of dimes:    " << DimAmt << endl;
    cout << "Amount of nickels:  " << NicAmt << endl;
    cout << "Amount of pennies:  " << PenAmt << endl;
    
    cout << endl; //Blank line
    
    cout << "Dollars from quarters: " << DolQtr << "$" << endl;
    cout << "Dollars from dimes:    " << DolDim << "$" << endl;
    cout << "Dollars from nickels:  " << DolNic << "$" << endl;
    cout << "Dollars from pennies:  " << DolPen << "$" << endl;
    
    cout << endl; //Blank line
    
    cout << "Grand Total: " << TotDlrs << "$" << endl;
    

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

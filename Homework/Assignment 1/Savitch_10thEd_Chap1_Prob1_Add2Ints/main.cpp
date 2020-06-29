/* 
 * File:   main.cpp
 * Author: Josepf Amador
 * Created on June 26, 2020, 4:17 P.M. PM
 * Purpose: Reads 2 integers from user and displays their sum and product. 
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
    int num1, num2, sum, product;
    
    //Initialize all known variables
    cout << "Enter the first integer then press Enter." << endl;
    cin >> num1;
    
    cout << "Enter the second integer then press Enter." << endl;
    cin >> num2;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    sum = num1 + num2;
    product = num1 * num2;
    
    //Display the Inputs/Outputs
    cout << "Sum: " << num1 << "+" << num2 << "=" << sum << endl;
    cout << "Product: " << num1 << "x" << num2 << "=" << product << endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

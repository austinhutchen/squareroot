#include <iostream>
#include "sqrt.h"
#include <ctime>

using namespace std;
long long now=clock();
// implement checker for very large numbers in algorithm
int main(){
Solution ans= Solution();
double input;
bool exit=false;
while(true){
cout << "Enter your number for the calculation of its nearest square root." << endl;
cout << "Enter 0 to exit." << endl;
cin >> input;
while(cin.fail()){
 cout << "Error. Please enter a number below." << endl;
 cin >> input;
}
if(input==0){
return 0;
}
unsigned long long k = ans.mySqrt(input);
if(k==0){
cout << "CALCULATION ERROR. INPUT OUTSIDE ROOT DOMAIN"<< endl;
}
else{
cout << "Your root is -> " << k << endl;
}
long long end=clock();
cout << "Time taken to check root: " << end-now << " seconds" << endl;
}
}



#include<iostream>
using namespace std;

int main()
{
    int rows, number = 1;
    cout << "enter the number of rows" << endl;
    cin >> rows;
    for (int i=1; i<=rows ; ++i) 
    {  
    for ( int j=1; j<=i; ++j) 
    {
    cout <<number <<"  ";
    ++ number ;
    }
    
    //for (int k=1; k<=2*i-1; ++k) 
    
     //   cout <<"☺️" ;
      //
        cout << "\n" ;
        }
    return 0;
}
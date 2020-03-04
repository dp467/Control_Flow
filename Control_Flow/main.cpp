//
//  main.cpp
//  Practice
//
//  Created by Dhruv Patel on 3/2/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#include <iostream>
using namespace std;

#include <vector>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> inputs;
    char option{};
    
    
    do {
        cout << " P: Print the number" << endl;
        cout << " A: Add the number to the list "<< endl;
        cout << " M: Mean of the number in the list" << endl;
        cout << " S: Display the smallest number in the list "<< endl;
        cout << " L: Display the largest number in the list "<< endl;
        cout << " Q: Quit" << endl;
        cout<< " Selct one the option : " ;
        cin >> option;
        
        
        if (option == 'p' || option == 'P'){
            if (inputs.size() == 0 ){
                cout << "  [] is empty" << endl;
            }
            
            else {
                cout << "[" ;
                for (auto var:inputs){
                    cout << var << "  " ;
                }
                cout <<"]"<< endl;
            }
        }else if (option == 'A' || option == 'a'){
            
                int num;
                cout << "Enter the number : " ;
                cin >> num;
                inputs.push_back (num);
            }
        else if (option == 'm'|| option == 'M'){
            if ( inputs.size()==0){
                cout << " Unable to calculate Mean, list is []" << endl;
            }
            else {
                float add{};
                float mean {};
                for (auto var : inputs){
                    add += var;
                    mean = add/float(inputs.size());
                }
            cout << " mean of the list is: " << mean << endl;
            }
        } else if ( option == 'S' || option == 's'){
            if ( inputs.size()==0){
                cout << " Unable to find smallest number, list is []" << endl;
            }
            else {
                int small = inputs.at(0);
                for (auto var:inputs){
                    if (small > var){
                        small = var ;
                        
                    }
                }
                cout << "The smallest number is : "<< small << endl;
                }
        }else if ( option == 'l' || option == 'L'){
            if ( inputs.size()==0){
                cout << " Unable to find largest number, list is []" << endl;
            }
            else {
                int small = inputs.at(0);
                for (auto var:inputs){
                    if (small < var){
                        small = var ;
                        
                    }
                }
                cout << "The smallest number is : "<< small << endl;
                
            }
        }
    }
        
    while ( option != 'Q' && option !='q' );{
            cout << "Good Bye"<< endl;
    }
    
    
    
    
    return 0 ;
    
}



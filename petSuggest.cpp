#include <iostream>
#include <string>
#include <limits>
using namespace std;


void inputChoice() {
	    cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		 cout << "\n Please enter an integer" << endl << endl;
		 cout << " Try again: ";
}

int main()
{
    int residenceChoice= 0;
    int hoursChoice = 0;
    string residence, hours, pet;
    
    do{
    cout << " Please indicate what type of residence you live in" << endl;
    cout << " 1. Apartment \n 2. House \n 3. Dormitory" <<endl;
    cout << endl << " Enter your residence type (1, 2 or 3): ";
    while(!(cin >> residenceChoice)){
	 inputChoice();
	}
    
    if (residenceChoice < 0 || residenceChoice > 3)
       cout << "\n Your choice must be between 1 - 3" << endl << endl;
    
    if (residenceChoice == 1)
       residence = "apartment";
    if (residenceChoice == 2)
       residence = "house";
    if (residenceChoice == 3)
       residence = "dormitory";
           
    }while(residenceChoice < 0 || residenceChoice > 3);
    
    
    do{
    cout << "\n Please indicate how many hours you spend at your ";
    cout << residence << " on an average day" << endl;
    cout << " 1. 18+ hours \n 2. 10-17 hours \n 3. 8-9 hours" << endl;
    cout << " 4. 6-7 hours \n 5. 0-5 hours" << endl;
    cout << endl << " Enter your selection (1, 2 , 3, 4, or 5): ";
     while(!(cin >> hoursChoice)){
	 inputChoice();
	}
    
    if (hoursChoice < 0 || hoursChoice > 5)
       cout << "\n Your choice must be between 1 - 5" << endl << endl;
    
    if (hoursChoice == 1)
       hours = "over 18";
    else if (hoursChoice == 2)
       hours = "10 - 17";
    else if (hoursChoice == 3)
       hours = "8 - 9";
    else if (hoursChoice == 4)
       hours = "6 - 7";
    else if (hoursChoice == 5)
       hours = "0 - 5";
    
    if(residenceChoice == 1) //Apartment Suggestions
    {
     switch(hoursChoice)
     {
      case 1:
      case 2:
pet = "Cat";
            break;
      case 3:
      case 4:
      case 5:
pet = "Hamster";
            break;
     }                  
    } 
    
    else if(residenceChoice == 2)  //House Suggestions
    {
     switch(hoursChoice)
     {
      case 1: 
pet = "Pot-bellied pig";
            break;
      case 2: 
pet = "Dog";
            break;
      case 3:
      case 4:
      case 5: 
pet = "Cat";
            break;
     }                  
    }
    
    else if(residenceChoice == 3)  //Dormitory Suggestions
    {
     switch(hoursChoice)
     {
      case 1: 
      case 2:
      case 3:
      case 4: 
pet = "Fish";
            break;
      case 5: 
pet = "Ant-farm";
            break;
     }                  
    }
           
    }while(hoursChoice < 0 || hoursChoice > 5);
    
         
    cout <<"\n \n Since you live in a "<< residence;
    cout <<" and spend " << hours << " hours there,";
    cout <<" your reccommended pet is the: " << pet << endl << endl<< endl;
       
    system("PAUSE");
    return 0;
}


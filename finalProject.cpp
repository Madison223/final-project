/*_________________________________________________________________*/
/*Madison Marsh
Joseph Smith
Advanced Programming*/
/*_________________________________________________________________*/
#include<iostream>








/*_________________________________________________________________*/
//Code starts here.

using namespace std;    

//the user input that allows the user to pick a choice
    int userOption; 
    
    //the length of arrays
    int length = 0; 
    
    //The name array that holds the name of the customer
    string name[30] = {}; 
    
    //the party number array that holds the number of the party
    int partyNum[30] = {}; 
    
    //the phone number array that holds phone numbers
    int phoneNum[30] = {}; 

    int i;
    int j;

    //delete string : user inputs the name to delete from waitlist
    string del;

    //found name in array list
    int found = 0;











/*_________________________________________________________________*/


//the addParty function: User inputs the name, party number, and phone number to be added to waitlist



//the addParty logic: 
void addParty() { 
        for (int i = length; i >= j; i--){ 
            name[i + 1] = name[i];
            partyNum[i + 1] = partyNum[i];
            phoneNum[i + 1] = phoneNum[i];
            name[i] = j;
            partyNum[i] = j;
            phoneNum[i] = j;
            
        }
            length = length + 1;
    }
    //Loops with the user inputs and adds 1 to length = length grows as more names on the waitlist are increasing












/*_________________________________________________________________*/


//the deleteParty function: User inputs a name from the list and it gets deleted from the waitlist



//the deleteParty logic:
void deleteParty() {
    for (int i = 0; i < length; i++) {
        if (name[i]==del) {
            for (j=i; j<(length-1); j++){
                name[j] = name[j+1];
                partyNum[j] = partyNum[j+1];
                phoneNum[j] = phoneNum[j+1];
            }
            found++;
            i--;
            length--;
        }
     
    }

}

/*loops through the waitlist and finds the user input of the name= uses integer found to find 
the name on the list and then decreases the size of the length, deleting that name*/










/*_________________________________________________________________*/



//mainMenu funtion starts here:
int mainMenu() {





        //user will be asked to choose a option between 1-5
    cout << "-~~~~~~~~~~~Main Menu~~~~~~~~~~~-" << endl;

//option 1: Shows and reprints the mainMenu
    cout << "------Option 1: Show the Main Menu------" << endl;



//option 2: runs the addParty() function: allows user to add a reservation or party to the waitlist
    cout << "------Option 2: Add a party to the Waitlist------" << endl;



    //option 3: Shows the current waitlist and prints the names that have been added towards it
    //the waitlist will update when names are deleted when user presses 3 + enter again
    cout << "------Option 3: Show the current Waitlist------" << endl;



/*option 4: run the deleteParty function: lets user delete a party (in case the 
party decides to leave and not want to wait anymore type of situation)*/
    cout << "------Option 4: Delete a party from the Waitlist------" << endl;



//option 5: exit out of the program (used when restaurant is closing)
    cout << "------Option 5: Exit program------" << endl;
    cout << "-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-" << endl;

//Asks user for input 1-5 to user the menu   
    cout << "Type the number of the cooresponding option here (1 through 5): " << endl;
    cin >> userOption;




/*_________________________________________________________________*/









//uses do-while and then a switch to process through the functions for them to work
    do
    {

        //switch relies on users option in the menu
        switch (userOption)
        {




    //case 1 holds the code to reopen the menu again if user types 1 + enter on keyboard then the menu is reopened just in case
        case 1:
            while (userOption == 1) {
            mainMenu();
            break;
            }

    


    //case 2 holds the code the add a party to the waitlist if user types 2 + enter in main menu
        case 2:
            while (userOption == 2) {
                
                //the addParty function is called here:
                addParty();


                //for loop of user unput with arrays- the name, party number, and phone number
                for ( i = 0; i < 1; i++) {    

                //user is asked to insert name
                cout << "Insert name: " << endl;
                cin >> name[i];

                //user must insert party number- how big is their party?
                cout << "Insert party number: " << endl;
                cin >> partyNum[i];

                //user must insert their phone number here:
                cout << "Insert phone number: " <<endl;
                cin >> phoneNum[i];

                //prints out what has been inserted in format: name__partyNum__phoneNum
                cout << name[i] << "__" << partyNum[i] << "__" << phoneNum[i] << endl;
 
                
                
            }



                //user is then brought back to the main menu once they have added the party
               mainMenu();
               break;
            }



    //case 3 shows the current waitlist and updates as the user adds and deletes parties from it
        case 3:
          while (userOption == 3) {
            
            cout << "-~~~~~~~~~~~~~~Waitlist~~~~~~~~~~~~~-" << endl;
            //for loop of the length of how many parties that have been added
            for (int i = 0; i < length; i++) { 

                 //prints out what has been inserted in format: name__partyNum__phoneNum
              cout << name[i] << "__" << partyNum[i] << "__" << phoneNum[i] << endl;
            }

            cout << "-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-" << endl;




            //once waitlist is shown- user returns to main menu
            mainMenu();
            break;
          }





    //Case 4 runs the deleteParty() function: user is asked to type out a name from the 
        case 4:
            
            while (userOption == 4) {

                //user must enter a name from the waitlist - check waitlist afterwards and the party should be deleted
                cout << "Enter the name in the list to be deleted: " << endl; 
                

                //for loop for deleting a party
                for (i = 0; i < 1; i++) {
                     cin >> del;
                     deleteParty();
                }
               
                
                
               //user is returned to the main menu once party has been deleted
                mainMenu();
                break;
            




            //case 5 just exits the program and stops the program from running
        }
        case 5: 
            while (userOption == 5) 
            {
                //exit program
                exit(0);
            }




        //if number is not between 1 and 5 then an error message will appear
        default:
        for (int i = 0; i < 1; i++) {
            cout << "Invalid response. Try again: number must between 1 and 5." << endl;
            
        }


        //main menu reopens
                mainMenu();
                break;
           

        }
        
        
    } while (userOption =! false);
    
     
            
       
    return 0;
}
int main() {

   mainMenu(); 
   return 0;

    
}

 
#include <iostream>
using namespace std;
struct Room {
    string name;
    string description;
    bool hasTreasure;
    Room* connectedRooms[5]; // Array to hold connected rooms


};

struct Monster {
    string name;
    int health;
};



int main() {
    int choice1;
    cout << "Game Menu\n";
    cout << "Select one of the following:\n";    cout << "1 - Play the Game\n";
    cout << "2 - Instructions\n";
    cout << "3 - Quit\n";
    cin >> choice1;
    switch (choice1)
    {
        case 1:
            cout << "You can now play the game. \n";
            break;
        case 2:
            cout << "Here are the instructions \n";
            break;
        case 3:
            cout << "Why are you quitting? \n";
            break;
        default:
            cout << "You made an Illegal Choice \n";
    }
    int choice2;
    cout << "Room Menu\n\n";
    cout << "Select one of the following:\n\n";
    cout << "1 - Look\n";
    cout << "2 - Inventory\n";
    cout << "3 - Map Location\n";
    cin >> choice2;
    switch (choice2)
    {
        case 1:
            cout << "You are looking at the different rooms. \n";
            break;
        case 2:
            cout << "You are looking at your current inventory \n";
            break;
        case 3:
            cout << "You are looking at the map \n";
            break;
        default:
            cout << "You made an Illegal Choice \n";
    }
    // First Inside Hospital
    for (int a = 1; a <= 18; a++) {
        cout << "*";
    }
    cout << endl;
    // Second Inside Hospital
    for (int b = 1; b <= 3; b++) {
        for (int c = 1; c <= 1; c++) {
            cout << "*";
        }
        for (int d = 1; d <= 16; d++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    cout << "* Inside Hospital*" << endl;
    for (int b = 1; b <= 3; b++) {
        for (int c = 1; c <= 1; c++) {
            cout << "*";
        }
        for (int d = 1; d <= 16; d++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    // Third Inside Hospital
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << "|  |";
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << endl;
    cout << "You’re in an abandoned hospital.\nThe building looks ravaged.\nYou see a figure hunched at the end of a long corridor." << endl;
    cout << endl;
    // First Hospital
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<"|  |";
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<endl;
    // Second Hospital
    cout << "*    Hospital    *" << endl;
    // Third Hospital
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << "|  |";
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << endl;
    cout << "You are outside of a hospital.\nThe building is relatively intact.\nYou see a pair of glasses laying on a bench in the courtyard." << endl;
    cout << endl;
    // First Front RV
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << "|  |";
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << endl;
    // Second Front RV
    cout << "*   Front of RV  *" << endl;
    // Third Front RV
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << "|  |";
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << endl;
    cout << "You are in front of the RV.\nYou see a building out in the distance.\nYou make out a couple letters.\nIt seems to be an abandoned hospital." << endl;
    cout << endl;
    //First Outside RV
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << "|  |";
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << endl;
    // Second Outside RV
    for (int b = 1; b <= 2; b++) {
        for (int c = 1; c <= 1; c++) {
            cout << "*";
        }
        for (int d = 1; d <= 16; d++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    cout << "*   Outside RV  >>" << endl;
    for (int b = 1; b <= 2; b++) {
        for (int c = 1; c <= 1; c++) {
            cout << "*";
        }
        for (int d = 1; d <= 16; d++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    // Third Outside RV
    for (int a = 1; a <= 7; a++) {
        cout << "*";
    }
    cout << "|  |";
    for (int a = 1; a <= 6; a++) {
        cout << "*";
    }
    cout << "*";
    cout << endl;
    cout << "You’re outside your RV.\nThere are a few supplies remaining inside.\nYou could go to the front or back of the RV." << endl;
    cout << endl;
    // First Inside RV
    for (int a = 1; a <= 8; a++) {
        cout << "*";
    }
    cout << endl;
    // Second Inside RV
    for (int b = 1; b <= 2; b++) {
        for (int c = 1; c <= 1; c++) {
            cout << "*";
        }
        for (int d = 1; d <= 6; d++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    cout << "*  RV  *" << endl;
    for (int b = 1; b <= 2; b++) {
        for (int c = 1; c <= 1; c++) {
            cout << "*";
        }
        for (int d = 1; d <= 6; d++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    // Third Inside RV
    for (int a = 1; a <= 8; a++) {
        cout << "*";
    }
    cout << endl;
    cout << "You're inside your RV.\nYou see a backpack, a first aid kit and a water bottle." << endl;
    cout << endl;
    // First Back RV
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<"|  |";
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<endl;
    // Second Back RV
    cout << "*   Back of RV   *" << endl;
    // Third Back RV
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<"|  |";
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<endl;
    cout << "You are facing a variety of other buildings that are crumbling.\nIt looks like one of them used to be a grocery store." << endl;
    cout << endl;
    // First Grocery Store
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<"|  |";
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<endl;
    // Second Grocery Store
    cout << "*  Grocery Store *" << endl;
    // Third Grocery Store
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<"|  |";
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<endl;
    cout << "You are outside of the store.\nThere is a large pile of rubbish near the entrance." << endl;
    cout << endl;
    // First Inside Store
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<"|  |";
    for(int a=1;a<=7;a++)
    {
        cout<<"*";
    }
    cout<<endl;
    // Second Inside Store
    for(int b=1;b<=1;b++)
    {
        for(int c=1;c<=1;c++)
        {
            cout<<"*";
        }
        for(int d=1;d<=16;d++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    cout << "*  Inside Store  *" << endl;
    for(int b=1;b<=1;b++) {
        for (int c = 1; c <= 1; c++) {
            cout << "*";
        }
        for (int d = 1; d <= 16; d++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    // Third Inside Store
    for(int a=1;a<=18;a++)
    {
        cout<<"*";
    }
    cout << endl;
    cout << "You are inside a grocery store.\nThere is a merchant selling wares in the back.\nOtherwise, the store is empty." << endl;
    return 0;
}

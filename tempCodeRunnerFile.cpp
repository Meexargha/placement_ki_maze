#include <iostream>
#include <string>

using namespace std;

const int MAX_DAYS = 31; // Maximum days in a month

// Function prototypes
void addEvent(string calendar[], int day);
void viewEvents(string calendar[], int day);
void editEvent(string calendar[], int day);
void deleteEvent(string calendar[], int day);
void displayCalendar(string calendar[]);

int main() {
    string calendar[MAX_DAYS] = {""}; // Array to hold events for each day 

    int choice, day;

    // Main menu
    do {
        cout << "\nCalendar Application\n";
        cout << "1. Add Event\n";
        cout << "2. View Events\n";
        cout << "3. Edit Event\n";
        cout << "4. Delete Event\n";
        cout << "5. Display Calendar\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter day number (1-31): ";
                cin >> day;
                addEvent(calendar, day);
                break;
            case 2:
                cout << "Enter day number (1-31): ";
                cin >> day;
                viewEvents(calendar, day);
                break;
            case 3:
                cout << "Enter day number (1-31): ";
                cin >> day;
                editEvent(calendar, day);
                break;
            case 4:
                cout << "Enter day number (1-31): ";
                cin >> day;
                deleteEvent(calendar, day);
                break;
            case 5:
                displayCalendar(calendar);
                break;
            case 6:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice! Please enter again.";
        }
    } while(choice != 6);

    return 0;
}
//function is the an array that hold data  of a specific  elements that makes the code of the elements of the array work fast and help that
//section is used and the elements that are being used in elements are called callnder and elements 
// Function to add an event to a specific day
void addEvent(string calendar[], int day) {
    if(day >= 1 && day <= MAX_DAYS) {
        cout << "Enter event for day " << day << ": ";
        cin.ignore(); // Ignore newline character from previous input
        getline(cin, calendar[day - 1]);
        cout << "Event added successfully!";
    } else {
        cout << "Invalid day number!";
 
    }
}

// Function to view events of a specific day
void viewEvents(string calendar[], int day) {
    if(day >= 1 && day <= MAX_DAYS) {
        cout << "Events for day " << day << ":\n";
        if(calendar[day - 1] != "")
            cout << calendar[day - 1] << endl;
        else
            cout << "No events scheduled.\n";
    } else {
        cout << "Invalid day number!";
    }
}

// Function to edit event of a specific day
void editEvent(string calendar[], int day) {
    if(day >= 1 && day <= MAX_DAYS) {
        cout << "Enter new event for day " << day << ": ";
        cin.ignore(); // Ignore newline character from previous input
        getline(cin, calendar[day - 1]);
        cout << "Event edited successfully!";
    } else {
        cout << "Invalid day number!";
    }
}

// Function to delete event of a specific day
void deleteEvent(string calendar[], int day) {
    if(day >= 1 && day <= MAX_DAYS) {
        calendar[day - 1] = ""; // Clear event for that day
        cout << "Event deleted successfully!";
    } else {
        cout << "Invalid day number!";
    }
}

// Function to display the entire calendar
void displayCalendar(string calendar[]) {
    cout << "Calendar:\n";
    for(int i = 0; i < MAX_DAYS; ++i) {
        if(calendar[i] != "")
            cout << "Day " << i + 1 << ": " << calendar[i] << endl;
    }
}

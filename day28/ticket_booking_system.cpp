#include <iostream>
#include <string>
using namespace std;

// Write a program to Create Ticket Booking System

class Ticket {
public:
    int ticketID;
    string name;
    string source;
    string destination;
    int seats;
    bool booked;
};

int main() {
    Ticket t[100];
    int n = 0, choice, id;
    bool found;
    int seatReq;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display All Bookings\n";
        cout << "3. Search Ticket by ID\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Ticket ID: ";
            cin >> t[n].ticketID;

            cout << "Enter Passenger Name: ";
            cin >> t[n].name;

            cout << "Enter Source: ";
            cin >> t[n].source;

            cout << "Enter Destination: ";
            cin >> t[n].destination;

            cout << "Enter Number of Seats: ";
            cin >> t[n].seats;

            t[n].booked = true;

            n++;
            cout << "Ticket Booked Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No ticket records available.\n";
            } else {
                cout << "\nTicket Records:\n";
                cout << "ID\tName\tSource\tDestination\tSeats\tStatus\n";

                for (int i = 0; i < n; i++) {
                    cout << t[i].ticketID << "\t"
                         << t[i].name << "\t"
                         << t[i].source << "\t"
                         << t[i].destination << "\t\t"
                         << t[i].seats << "\t"
                         << (t[i].booked ? "Booked" : "Cancelled")
                         << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Ticket ID to Search: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (t[i].ticketID == id) {
                    cout << "\nTicket Found:\n";
                    cout << "Ticket ID: " << t[i].ticketID << endl;
                    cout << "Name: " << t[i].name << endl;
                    cout << "Source: " << t[i].source << endl;
                    cout << "Destination: " << t[i].destination << endl;
                    cout << "Seats: " << t[i].seats << endl;
                    cout << "Status: " << (t[i].booked ? "Booked" : "Cancelled") << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Ticket Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Ticket ID to Cancel: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (t[i].ticketID == id) {
                    if (t[i].booked) {
                        t[i].booked = false;
                        cout << "Ticket Cancelled Successfully!\n";
                    } else {
                        cout << "Ticket is already cancelled.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Ticket Not Found.\n";
            }
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}
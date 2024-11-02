#include <iostream>
using namespace std;

bool isWinningTicket(const int tickets[], int size, int winningNumber) {
    for (int i = 0; i < size; i++) {
        if (tickets[i] == winningNumber) // Check if the current ticket matches the winning number
            return true;
    }
    return false; // Return false if no match is found
}

int main() {
    const int ticketCount = 10;
    int tickets[ticketCount] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int winningNumber;

    cout << "Enter this week’s winning 5-digit number: ";
    cin >> winningNumber;

    // Check if the winning number is a valid 5-digit number
    if (winningNumber < 10000 || winningNumber > 99999) {
        cout << "Invalid number! Please enter a 5-digit number." << endl;
    } else if (isWinningTicket(tickets, ticketCount, winningNumber)) {
        cout << "Congratulations! You have a winning ticket!" << endl;
    } else {
        cout << "Sorry, no winning ticket this week." << endl;
    }

    return 0;
}

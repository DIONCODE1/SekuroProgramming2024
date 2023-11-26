#include <iostream>
#include <stack>

using namespace std;

struct Coordinate {
    int x, y;
};

class Drone {
private:
    Coordinate currentPos;
    stack<Coordinate> history;
    stack<Coordinate> redoHistory;

public:
    Drone(int initialX, int initialY) : currentPos{ initialX, initialY } {
        history.push(currentPos);
    }

    void move(int newX, int newY) {
        redoHistory = stack<Coordinate>();  // Reset redo history when a new move is made
        currentPos = { newX, newY };
        history.push(currentPos);
    }

    void undo() {
        if (history.size() > 1) {
            redoHistory.push(history.top());
            history.pop();
            currentPos = history.top();
        }
        else {
            cout << "Undo tidak dapat dilakukan. Sudah berada di history awal." << endl;
        }
    }

    void redo() {
        if (!redoHistory.empty()) {
            history.push(redoHistory.top());
            currentPos = redoHistory.top();
            redoHistory.pop();
        }
        else {
            cout << "Redo tidak dapat dilakukan. Lakukan gerak/gerak_2 terlebih dahulu." << endl;
        }
    }

    void displayCurrentPosition() const {
        cout << "Posisi Drone: (" << currentPos.x << ", " << currentPos.y << ")" << endl;
    }
};

int main() {
    Drone drone(0, 0);

    // Test case
    drone.move(3, 4);
    drone.displayCurrentPosition();

    drone.undo();
    drone.displayCurrentPosition();

    drone.redo();
    drone.displayCurrentPosition();

    drone.redo();  // Redo tidak dapat dilakukan karena belum ada gerak/gerak_2 setelah undo
    drone.displayCurrentPosition();

    return 0;
}

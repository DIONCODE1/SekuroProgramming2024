#include <iostream>
using namespace std;
class Simulasi_Drone
{
public:
    void run()
    {
        while (true)
        {
            displayMenu();
            int choice = getUserChoice();

            switch (choice)
            {
            case 1:
                simulateTask();
                break;
            case 2:
                customFunction1();
                break;
            case 3:
                customFunction2();
                break;
            case 4:
                customFunction3();
                break;
            case 5: 
                customFunction4();
                break;
            case 6:
                customFunction5();
                break;
            case 7:
                customFunction6();
                break;
            case 8:
                cout << "Drone dinonaktifkan . Terima kasih ! " << endl;
                return;
            default:
                cout << "Silakan memilih opsi yang disediakan" << endl;
            }
        }
    }

private:
    void displayMenu()
    {
        cout << "Simulasi Drone ... " << endl;
        cout << "1. Maju" << endl;
        cout << "2. Mundur" << endl;
        cout << "3. Naik" << endl;
        cout << "4. Turun" << endl;
        cout << "5. Ke kanan" << endl;
        cout << "6. Ke kiri" << endl;
        cout << "7. Berhenti" << endl;
        cout << "8. Off" << endl;
        cout << "Pilih opsi (1-8): ";
    }

    int getUserChoice()
    {
        int choice;
        cin >> choice;
        return choice;
    }

    void simulateTask()
    {
        cout << "Drone bergerak maju" << endl;
    }

    void customFunction1()
    {
        cout << "Drone bergerak mundur" << endl;
    }

    void customFunction2()
    {
        cout << "Drone bergerak ke atas" << endl;
    }

    void customFunction3()
    {
        cout << "Drone bergerak ke bawah" << endl;
    }
    void customFunction4()
    {
        cout << "Drone bergerak ke kanan" << endl;
    }
    void customFunction5()
    {
        cout << "Drone bergerak ke kiri" << endl;
    }
    void customFunction6()
    {
        cout << "Drone berhenti" << endl; 
    }
    void customFunction7()
    {
        cout << "Drone berhenti bergerak" << endl;
    }

};

int main()
{
    Simulasi_Drone simulation;
    simulation.run();

    return 0;
}


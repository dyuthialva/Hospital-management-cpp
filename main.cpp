#include "QueueManager.h"

int main() {
    QueueManager qm;
    int choice;

    do {
        cout << "\n1. Add Patient\n2. Serve Patient\n3. Display\n4. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1: qm.addPatient(); break;
            case 2: qm.servePatient(); break;
            case 3: qm.displayQueues(); break;
        }

    } while(choice != 4);

    return 0;
}
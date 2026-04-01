#include "QueueManager.h"

void QueueManager::addPatient() {
    int type;
    cout << "1. General  2. Emergency: ";
    cin >> type;

    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;

    if (type == 1)
        normalQueue.push(new GeneralPatient(name, age));
    else
        emergencyQueue.push(new EmergencyPatient(name, age));
}

void QueueManager::servePatient() {
    if (!emergencyQueue.empty()) {
        Patient* p = emergencyQueue.front();
        emergencyQueue.pop();
        cout << "Serving Emergency Patient: ";
        p->display();
        cout << endl;
        delete p;
    }
    else if (!normalQueue.empty()) {
        Patient* p = normalQueue.front();
        normalQueue.pop();
        cout << "Serving General Patient: ";
        p->display();
        cout << endl;
        delete p;

    }
    else {
        cout << "No patients waiting.\n";
    }
}

void QueueManager::displayQueues() {
    queue<Patient*> tempE = emergencyQueue;
    queue<Patient*> tempN = normalQueue;

    cout << "\nEmergency Queue:\n";
    while (!tempE.empty()) {
        tempE.front()->display();
        cout << endl;
        tempE.pop();
    }

    cout << "\nGeneral Queue:\n";
    while (!tempN.empty()) {
        tempN.front()->display();
        cout << endl;
        tempN.pop();
    }
}

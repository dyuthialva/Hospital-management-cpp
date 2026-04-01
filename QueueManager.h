#ifndef QUEUEMANAGER_H
#define QUEUEMANAGER_H

#include "Patient.h"
#include <queue>

class QueueManager {
private:
    queue<Patient*> normalQueue;
    queue<Patient*> emergencyQueue;

public:
    void addPatient();
    void servePatient();
    void displayQueues();
};

#endif
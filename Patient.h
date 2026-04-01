#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
using namespace std;

class Patient {
protected:
    string name;
    int age;

public:
    Patient(string n, int a);
    virtual void display();
    virtual int getPriority();
};

class GeneralPatient : public Patient {
public:
    GeneralPatient(string n, int a);
    int getPriority() override;
};

class EmergencyPatient : public Patient {
public:
    EmergencyPatient(string n, int a);
    int getPriority() override;
};

#endif
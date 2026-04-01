#include "Patient.h"

Patient::Patient(string n, int a) {
    name = n;
    age = a;
}

void Patient::display() {
    cout << "Name: " << name << ", Age: " << age;
}

int Patient::getPriority() {
    return 0;
}

// General Patient
GeneralPatient::GeneralPatient(string n, int a) : Patient(n, a) {}

int GeneralPatient::getPriority() {
    return 1;
}

// Emergency Patient
EmergencyPatient::EmergencyPatient(string n, int a) : Patient(n, a) {}

int EmergencyPatient::getPriority() {
    return 10;
}
# 🏥 Hospital Patient Management System (C++)

A simple yet structured C++ project that simulates a hospital patient handling system using **Object-Oriented Programming (OOP)** and **Data Structures (Queue)**.

---

## 📌 Problem Statement

In hospitals, patients are treated based on urgency. Emergency cases must be handled before general patients, while maintaining order among others.

This project simulates that system using queues and priority handling.

---

## 💡 Features

* Add patients (General / Emergency)
* Serve patients based on priority
* Display waiting list
* Emergency patients are always treated first
* FIFO order maintained for general patients

---

## 🧠 Concepts Used

* **Classes & Objects**
* **Inheritance**
* **Polymorphism**
* **Queue (FIFO)**
* **Dynamic Memory Allocation**

---

## 🗂️ Project Structure

```
HospitalManagement/
│
├── main.cpp
├── Patient.h
├── Patient.cpp
├── QueueManager.h
├── QueueManager.cpp
└── README.md
```

---

## ⚙️ How to Run

### 1. Clone the repository

```
git clone https://github.com/dyuthialva/HospitalManagement.git
cd HospitalManagement
```

### 2. Compile the program

```
g++ main.cpp Patient.cpp QueueManager.cpp -o hospital
```

### 3. Run

```
./hospital
```

---

## 🖥️ Sample Menu

```
1. Add Patient
2. Serve Patient
3. Display Waiting List
4. Exit
```

---

## 🚀 Future Improvements

* Add severity levels for emergency patients
* Store patient data in files
* Add doctor assignment system
* Replace queues with priority_queue
* Build a GUI version

---

## 📈 Why This Project?

This project demonstrates:

* Practical use of **queues in real-world scenarios**
* Clean **OOP design with inheritance**
* Modular programming using multiple files

---

## 🤝 Contributing

Feel free to fork this repository and improve the system!

---

## 📄 License

This project is open-source and free to use.

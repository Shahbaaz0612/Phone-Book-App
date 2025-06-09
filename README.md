# ☎ Phone Book App

## 📘 Overview

This project is a *Phone Book Application* implemented in C using data structures and file handling. It allows users to:
- Create new contacts
- Add multiple numbers, emails, and addresses per contact
- Edit, delete, and search contacts
- Save data to a file and load it on relaunch

The application is built using *Singly Linked List* and supports persistent storage via files.

---

## 🎯 Features

- Add new contact with multiple phone numbers
- Add additional details: email, address, etc.
- Edit any existing contact
- Delete contacts by name
- Search contacts by name
- Save and load contacts to/from a file

---

## 🖥 User Interface

On running the application, the following menu is displayed:


------------------MENU---------------------------

c/C:  Create a new contact  
p/P:  Print all contacts  
d/D:  Delete contact  
f/F:  Find contact  
e/E:  Edit a contact  
s/S:  Save the contacts in the file  
q/Q:  Quit from app


---

## 🛠 How to Build and Run

### 🧾 Prerequisites
- GCC Compiler
- Make Utility

### 🔧 Compile
Use the Makefile provided:
bash
make


### ▶ Run
bash
./phonebook


---

## 💾 Data Persistence

- Contact data is saved to a file when s/S is chosen.
- On re-launch, the previous data is automatically loaded (via syncfile()).

---

## 📁 Project Structure

├── main.c
├── create.c
├── delete.c
├── edit.c
├── find.c
├── print.c
├── save.c
├── syncfile.c
├── contact.h
├── makefile
└── README.md

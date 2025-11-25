# university_management
# 🎓 **University Management System (C Project)**

## 📄 **Abstract**
The **University Management System** is a simple, menu-driven application written in **C**, designed to manage student records efficiently.

It supports adding, searching, updating, deleting, and viewing student details.  
All data is stored in a persistent **binary file (`university.dat`)**, ensuring the records remain available across program restarts.

This project demonstrates core C programming concepts such as:

- 🧱 Structures  
- 📂 File Handling  
- 📊 Arrays  
- 🧭 Menu-Driven Programs  
- 💾 Persistent Storage  

This system is ideal for **beginners, mini-projects, academic submissions**, and small educational institutions.

---

# 🚨 **Features of the Program**

### ✔ **Add New Student**
Stores complete student details:
- Student ID  
- Name  
- Age  
- Gender  
- Department  
- Year Level  
- Course  
- Contact Information  

### ✔ **Other Functionalities**
- View all students (tabular display)  
- Search student by ID  
- Update student details  
- Delete student records  
- Auto-creates `university.dat`  
- Beginner-friendly interface  
- Input validation  

---

# 🖥 **Technical Requirements**

## **1. System Requirements**
- OS: Windows / Linux / macOS  
- Terminal or Command Prompt  
- 4 MB RAM  
- Small storage for `university.dat`  

## **2. Software Requirements**
- C Compiler  
  - GCC / Clang / MinGW / MSVC  
- Any code editor / IDE:
  - VS Code  
  - Code::Blocks  
  - Dev-C++  
  - Notepad++  
  - Online GDB  

## **3. Programming Libraries**
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


# 📂 File Handling

- Uses binary file: `university.dat`
- Auto-created if missing
- Read/write access required

# 🛠 Compile Command
```bash
gcc university.c -o university -Wall

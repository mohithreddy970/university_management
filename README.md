ABSTRACT

The University Management System is a terminal-based application written in C that enables users to manage student academic records efficiently.

It provides essential capabilities such as adding, viewing, searching, updating, and deleting student information.

All records are stored persistently in a binary file (university.dat), ensuring the data remains saved across program runs.

This project demonstrates key C programming concepts such as structures, file handling, looping, control flow, and modular design. It is ideal for academic coursework, practical learning, and beginner-level system design.

✨ FEATURES
Core Functionalities

➕ Add new student records (Student ID, Name, Age, Gender, Department, Year Level, Contact No)


📋 Display all student records in a formatted table


🔍 Search student by Student ID or Name


✏️ Update student information

❌ Delete student records

💾 Persistent data storage using binary file (university.dat)

🖥️ Fully terminal-based, menu-driven interface

👨‍💻 Beginner-friendly modular C code

⚙️ Automatically creates the data file when missing

⚠️ Includes basic input validation and error handling

🛠️ TECHNICAL REQUIREMENTS
System Requirements

Operating System: Windows / Linux / macOS

Terminal or Command Prompt

Minimum 4 MB RAM

Minimal storage space for university.dat

Software Requirements

C Compiler: GCC / MinGW / Clang / MSVC

Code Editor / IDE: VS Code, Code::Blocks, Dev-C++, etc.

Optional: Make utility for automation

Programming Requirements

Language: C

Standards Supported: C89 / C99 / C11

Required Header Files:

stdio.h
stdlib.h
string.h
ctype.h

📁 FILE HANDLING

Binary read/write required

Stores all records in university.dat

Uses fread() and fwrite()

Creates the data file automatically if missing

📌 FUNCTIONAL REQUIREMENTS
User Interface

Terminal-based interface

Clean, menu-driven navigation

Input validation integrated

🎓 Student Management Operations
➕ Add Student Record

Enter:

Student ID (auto-generated)

Name

Age

Gender

Department

Year Level

Contact No

Saved in university.dat

📋 Display All Students

Shows all records in a formatted table

🔍 Search Student

Search by Student ID

OR by Name (case-insensitive)

✏️ Update Student Record

Modify any student field (Name, Department, Contact, etc.)

❌ Delete Student Record

Permanently removes a student entry using the temporary file rewrite method

🔧 DATA MANAGEMENT

Fast and efficient binary file storage

Safe updates and deletions

Gracefully handles empty or missing files

🔄 PROGRAM FLOW

Menu runs inside a continuous loop

Exit option provided

Displays informative success/error messages

▶️ Running the Program
1️⃣ Compile
gcc university.c -o university

2️⃣ Run
Linux / macOS:
./university

Windows:
university.exe

3️⃣ Data File

Automatically creates university.dat

Stores all student information in binary format



✅ Turn this into a PDF-ready project report
✅ Create a README.md
✅ Generate the full university management C source code
✅ Add diagrams (DFD, flowchart, UML)

Just tell me!

You said:
convert this to university management 
ChatGPT said:

Here is your entire Venue Management System document fully converted into a University Management System, keeping your exact structure, style, icons, formatting, and flow — only rewritten for university/student record management.

ABSTRACT

The University Management System is a terminal-based application written in C that enables users to manage student records efficiently.

It provides essential capabilities such as adding, viewing, searching, updating, and deleting student details.

All records are stored persistently in a binary file (university.dat) ensuring the data remains saved across program runs.

This project illustrates key C programming concepts such as structures, file handling, control flow, loops, and modular design. It is suitable for beginners, coursework, and practical learning.

✨ FEATURES
Core Functionalities

➕ Add new student records (Student ID, Name, Age, Gender, Department, Year Level, Contact No)
📋 Display all student records in a formatted table
🔍 Search student by Student ID
✏️ Update student information
❌ Delete student records
💾 Persistent data storage using binary file (university.dat)
🖥️ Fully terminal-based, menu-driven interface
👨‍💻 Beginner-friendly modular code
⚙️ Auto-creates the data file if missing
⚠️ Includes basic input validation & error handling

🛠️ TECHNICAL REQUIREMENTS
System Requirements

Operating System: Windows / Linux / macOS

Terminal or Command Prompt

At least 4 MB RAM

Minimal disk space for university.dat

Software Requirements

C Compiler: GCC / MinGW / Clang / MSVC

Code Editor or IDE: VS Code, Code::Blocks, Dev-C++, etc.

Optional: Make utility (if using a Makefile)

Programming Requirements

Language: C

Standard Supported: C89 / C99 / C11

Header files required:

stdio.h
stdlib.h
string.h
ctype.h

📁 FILE HANDLING

Read/Write permissions in working directory

Records stored in binary format (university.dat)

File auto-created if not found

📌 FUNCTIONAL REQUIREMENTS
User Interface

Terminal-based CLI

Clean menu-driven navigation

Validates user input

🎓 Student Management Operations
➕ Add Student

Enter details such as:

Student ID (auto-generated)

Name

Age

Gender

Department

Year Level

Contact No

Stored in university.dat.

📋 Display Students

Displays all student records in a clean table format.

🔍 Search Student

Search using unique Student ID.

✏️ Update Student

Modify Name, Age, Gender, Department, Contact No, etc.

❌ Delete Student

Permanently removes a student record using a temporary file method.

🔧 DATA MANAGEMENT

Binary file storage → fast and efficient

Safe updates and deletions

Handles empty/missing file gracefully

🔄 PROGRAM FLOW

Menu runs in a loop

Exit option included

Shows clear success/error messages appropriately

▶️ Running the Program
1️⃣ Compile
gcc university.c -o university

2️⃣ Run
Linux / macOS:
./university

Windows:
university.exe

3️⃣ Data File

Automatically creates university.dat

Stores all student data in binary form

📸 Screenshots (Optional)
Add Student

<img width="521" height="566" alt="Screenshot 2025-11-25 093040" src="https://github.com/user-attachments/assets/ad5243d0-fb78-4189-bc54-6db57a407107" />


Display Students

<img width="1331" height="411" alt="Screenshot 2025-11-25 093131" src="https://github.com/user-attachments/assets/b1869b91-5144-426c-b40d-0a679dc4d8d3" />


Search Student

<img width="332" height="593" alt="Screenshot 2025-11-25 093149" src="https://github.com/user-attachments/assets/1e75d541-6704-4a12-8204-e0efe00f1b17" />

update student 


<img width="410" height="473" alt="Screenshot 2025-11-25 093207" src="https://github.com/user-attachments/assets/f3ef1a9f-80ab-4a0e-bc6d-546988120089" />


Delete Student

<img width="620" height="382" alt="Screenshot 2025-11-25 093220" src="https://github.com/user-attachments/assets/15c42612-7a8e-473e-812c-e3e398841514" />


Exit

<img width="492" height="332" alt="Screenshot 2025-11-25 093230" src="https://github.com/user-attachments/assets/f0b4d447-85f3-4e65-93d7-d8f293f5fd78" />

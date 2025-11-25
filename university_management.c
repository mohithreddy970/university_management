#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "university.dat"
#define MAX_NAME_LEN 100
#define MAX_DEPT_LEN 100
#define MAX_COURSE_LEN 100
#define MAX_CONTACT_LEN 50

// ------------------ STRUCT DEFINITION ------------------
typedef struct {
    int id;
    char name[MAX_NAME_LEN];
    int age;
    char gender[10];
    char department[MAX_DEPT_LEN];
    char yearLevel[20];
    char course[MAX_COURSE_LEN];
    char contact[MAX_CONTACT_LEN];
} UniversityRecord;

// ------------------ FUNCTION DECLARATIONS ------------------
void addRecord();
void viewRecords();
void searchRecord();
void updateRecord();
void deleteRecord();
int idExists(int id);
void saveRecord(UniversityRecord r);
void loadRecords(UniversityRecord records[], int *count);
void writeAllRecords(UniversityRecord records[], int count);

// ------------------ MAIN MENU ------------------
int main() {
    int choice;
    do {
        printf("\n==============================\n");
        printf("   UNIVERSITY MANAGEMENT\n");
        printf("==============================\n");
        printf("1. Add New University Record\n");
        printf("2. View All Records\n");
        printf("3. Search Record\n");
        printf("4. Update Record\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");
        printf("------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: addRecord(); break;
            case 2: viewRecords(); break;
            case 3: searchRecord(); break;
            case 4: updateRecord(); break;
            case 5: deleteRecord(); break;
            case 6: printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// ------------------ ADD RECORD ------------------
void addRecord() {
    UniversityRecord r;
    printf("\n--- Add University Record ---\n");

    printf("Enter ID: ");
    scanf("%d", &r.id);
    getchar();

    if (idExists(r.id)) {
        printf("Error: ID already exists!\n");
        return;
    }

    printf("Enter Full Name: ");
    fgets(r.name, sizeof(r.name), stdin);
    r.name[strcspn(r.name, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &r.age);
    getchar();

    printf("Enter Gender: ");
    fgets(r.gender, sizeof(r.gender), stdin);
    r.gender[strcspn(r.gender, "\n")] = '\0';

    printf("Enter Department: ");
    fgets(r.department, sizeof(r.department), stdin);
    r.department[strcspn(r.department, "\n")] = '\0';

    printf("Enter Year Level: ");
    fgets(r.yearLevel, sizeof(r.yearLevel), stdin);
    r.yearLevel[strcspn(r.yearLevel, "\n")] = '\0';

    printf("Enter Course Enrolled: ");
    fgets(r.course, sizeof(r.course), stdin);
    r.course[strcspn(r.course, "\n")] = '\0';

    printf("Enter Contact Email/Phone: ");
    fgets(r.contact, sizeof(r.contact), stdin);
    r.contact[strcspn(r.contact, "\n")] = '\0';

    saveRecord(r);
    printf("Record added successfully!\n");
}

// ------------------ SAVE RECORD ------------------
void saveRecord(UniversityRecord r) {
    FILE *fp = fopen(FILE_NAME, "ab");
    if (!fp) {
        perror("Error opening file");
        return;
    }
    fwrite(&r, sizeof(UniversityRecord), 1, fp);
    fclose(fp);
}

// ------------------ CHECK ID EXISTENCE ------------------
int idExists(int id) {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) return 0;

    UniversityRecord r;
    while (fread(&r, sizeof(UniversityRecord), 1, fp)) {
        if (r.id == id) {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}

// ------------------ VIEW ALL RECORDS ------------------
void viewRecords() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) {
        printf("No records found.\n");
        return;
    }

    UniversityRecord r;
    printf("\n%-10s %-20s %-5s %-10s %-15s %-15s %-20s %-20s\n",
           "ID", "Name", "Age", "Gender", "Dept", "Year", "Course", "Contact");
    printf("-------------------------------------------------------------------------------------------------------\n");

    while (fread(&r, sizeof(UniversityRecord), 1, fp)) {
        printf("%-10d %-20s %-5d %-10s %-15s %-15s %-20s %-20s\n",
               r.id, r.name, r.age, r.gender, r.department,
               r.yearLevel, r.course, r.contact);
    }

    fclose(fp);
}

// ------------------ SEARCH RECORD ------------------
void searchRecord() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) {
        printf("No records found.\n");
        return;
    }

    int id, found = 0;
    UniversityRecord r;

    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    while (fread(&r, sizeof(UniversityRecord), 1, fp)) {
        if (r.id == id) {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nAge: %d\nGender: %s\nDepartment: %s\nYear Level: %s\nCourse: %s\nContact: %s\n",
                   r.id, r.name, r.age, r.gender, r.department,
                   r.yearLevel, r.course, r.contact);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("No record found with ID %d.\n", id);

    fclose(fp);
}

// ------------------ UPDATE RECORD ------------------
void updateRecord() {
    UniversityRecord records[200];
    int count = 0, id, found = 0;

    loadRecords(records, &count);

    printf("\nEnter ID to update: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (records[i].id == id) {
            found = 1;

            printf("Enter new contact info: ");
            fgets(records[i].contact, sizeof(records[i].contact), stdin);
            records[i].contact[strcspn(records[i].contact, "\n")] = '\0';

            printf("Enter new year level: ");
            fgets(records[i].yearLevel, sizeof(records[i].yearLevel), stdin);
            records[i].yearLevel[strcspn(records[i].yearLevel, "\n")] = '\0';

            printf("Enter new course: ");
            fgets(records[i].course, sizeof(records[i].course), stdin);
            records[i].course[strcspn(records[i].course, "\n")] = '\0';

            break;
        }
    }

    if (found) {
        writeAllRecords(records, count);
        printf("Record updated successfully.\n");
    } else {
        printf("ID not found.\n");
    }
}

// ------------------ DELETE RECORD ------------------
void deleteRecord() {
    UniversityRecord records[200];
    int count = 0, id, found = 0;

    loadRecords(records, &count);

    printf("\nEnter ID to delete: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (records[i].id == id) {
            found = 1;

            printf("Are you sure you want to delete %s (ID %d)? (y/n): ",
                   records[i].name, id);

            char confirm = getchar();
            getchar();

            if (confirm == 'y' || confirm == 'Y') {
                for (int j = i; j < count - 1; j++)
                    records[j] = records[j + 1];

                count--;
                writeAllRecords(records, count);
                printf("Record deleted successfully.\n");
            } else {
                printf("Deletion cancelled.\n");
            }

            break;
        }
    }

    if (!found)
        printf("ID not found.\n");
}

// ------------------ LOAD & WRITE ALL ------------------
void loadRecords(UniversityRecord records[], int *count) {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) return;

    *count = 0;
    while (fread(&records[*count], sizeof(UniversityRecord), 1, fp))
        (*count)++;

    fclose(fp);
}

void writeAllRecords(UniversityRecord records[], int count) {
    FILE *fp = fopen(FILE_NAME, "wb");
    if (!fp) {
        perror("Error opening file");
        return;
    }

    fwrite(records, sizeof(UniversityRecord), count, fp);
    fclose(fp);
}

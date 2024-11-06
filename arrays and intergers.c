#include <stdio.h>

#define SIZE 5

// Define the Record structure
typedef struct {
    int id;            // Integer field for sorting
    char name[20];     // Name field
    float value;       // Value field
} Record;

// Function prototypes
void printRecords(const Record records[], int size);
void sortRecordsById(Record records[], int size);

int main() {
    // Initialize an array of records with sample data
    Record records[SIZE] = {
        {3, "Wilfred", 9.5},
        {1, "kim", 5.7},
        {4, "Allan", 8.2},
        {2, "Amos", 6.3},
        {5, "Victor", 7.9}
    };

    printf("Before sorting by ID:\n");
    printRecords(records, SIZE);

    // Sort records by the 'id' field
    sortRecordsById(records, SIZE);

    printf("\nAfter sorting by ID:\n");
    printRecords(records, SIZE);

    return 0;
}

// Function to print an array of records
void printRecords(const Record records[], int size) {
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Value: %.2f\n", records[i].id, records[i].name, records[i].value);
    }
}

// Simple Bubble Sort to sort records by the 'id' field
void sortRecordsById(Record records[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (records[j].id > records[j + 1].id) {
                // Swap the records if out of order
                Record temp = records[j];
                records[j] = records[j + 1];
                records[j + 1] = temp;
            }
        }
    }
}

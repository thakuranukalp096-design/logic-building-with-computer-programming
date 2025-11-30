#include <stdio.h>
#include <string.h>

// Structure definition
struct StudentStruct {
    char name[20];
    int roll;
    float marks;
};

// Union definition
union StudentUnion {
    char name[20];
    int roll;
    float marks;
};

int main() {
    // Using Structure
    struct StudentStruct s1, s2;
    strcpy(s1.name, "Shyam");
    s1.roll = 101;
    s1.marks = 95.5;
    s2 = s1; // Copy structure

    printf("STRUCTURE EXAMPLE:\n");
    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("Marks: %.2f\n\n", s2.marks);

    // Using Union
    union StudentUnion u1;

    printf("UNION EXAMPLE:\n");

    strcpy(u1.name, "Shyam");  // Store name
    printf("Name: %s\n", u1.name);

    u1.roll = 101;              // Store roll (overwrites name)
    printf("Roll: %d\n", u1.roll);

    u1.marks = 95.5;            // Store marks (overwrites roll)
    printf("Marks: %.2f\n", u1.marks);

    // Previous values are overwritten
    printf("After storing marks, previous values are lost:\n");
    printf("Name (corrupted): %s\n", u1.name);
    printf("Roll (corrupted): %d\n", u1.roll);

    return 0;
}
